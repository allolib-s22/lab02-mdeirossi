#include "Gamma/Analysis.h"
#include "Gamma/Effects.h"
#include "Gamma/Envelope.h"
#include "Gamma/Oscillator.h"

#include "al/app/al_App.hpp"
#include "al/graphics/al_Shapes.hpp"
#include "al/scene/al_PolySynth.hpp"
#include "al/scene/al_SynthSequencer.hpp"
#include "al/ui/al_ControlGUI.hpp"
#include "al/ui/al_Parameter.hpp"

#include "staff.hpp"
#include "InstrumentCelesta.hpp"

#include <cstdio>
#include <vector>
#include <cmath>

using namespace al;


class Score
{
public:
    Score()
    {
        this->amplitude = 0.5f;
        this->beatUnitsPerSecond = 256.0f;
        this->maxNoteSeparation = 0.5f;
        this->currentStaff = -1;
    }

    void addStaff(SynthVoice* instrument, std::string name)
    {
        staffNames.push_back(name);
        staves.push_back(Staff(instrument));
        currentStaff = staffNames.size() - 1;
    }

    void setStaff(std::string name)
    {
        std::vector<std::string>::iterator it = std::find(staffNames.begin(), staffNames.end(), name);
        if (it == staffNames.end()) {
            std::cerr << "No staff with name " << name << std::endl;
            throw std::invalid_argument("No staff with name " + name);
        }
        currentStaff = it - staffNames.begin();
    }

    void addMeasure(TimeSignature timeSignature)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        staves.at(currentStaff).getMeasures().push_back(Measure(timeSignature));
    }

    void addMeasure()
    {

        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        if (staves.at(currentStaff).getMeasures().size() < 1) {
            std::cerr << "Time signature required in first measure" << std::endl;
            throw std::invalid_argument("Time signature required in first measure");
        }
        staves.at(currentStaff).getMeasures().push_back(Measure(staves.at(currentStaff).getMeasures().back().getTimeSignature()));
    }

    void addNote(NoteName name, Accidental accidental, NoteType type)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        staves.at(currentStaff).getMeasures().back().addNote(Note(name, accidental, type));
    }

    void addRest(NoteType type)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        staves.at(currentStaff).getMeasures().back().addRest(Rest(type));
    }

    void addDot()
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        staves.at(currentStaff).getMeasures().back().addDot();
    }

    void addDoubleDot()
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        staves.at(currentStaff).getMeasures().back().addDoubleDot();
    }

    void setDynamic(Dynamic dynamic)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        staves.at(currentStaff).getMeasures().back().setDynamic(dynamic);
    }

    void setTempo(NoteType type, float BPM, bool dotted = false)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        float typeValue = (dotted) ? (as_int(type) / 2.0f + as_int(type)) : as_int(type);
        staves.at(currentStaff).getMeasures().back().setBeatUnitsPerSecond((BPM / 60.0f) * (256.0f / typeValue) * 256.0f);
    }

    void setInitialDynamic(Dynamic dynamic)
    {
        this->amplitude = as_int(dynamic) / 100.0f;
    }
        
    void setInitialTempo(NoteType type, float BPM, bool dotted = false)
    {
        float typeValue = (dotted) ? (as_int(type) / 2.0f + as_int(type)) : as_int(type);
        this->beatUnitsPerSecond = (BPM / 60.0f) * (256.0f / typeValue) * 256.0f;
    }

    void setMaxNoteSeparation(float maxNoteSeparation)
    {
        this->maxNoteSeparation = maxNoteSeparation;
    }

    void playScore()
    {
        SynthVoice* voice;
        Staff staff;
        Measure measure;
        Note note;
        float currentTime;

        for (size_t s = 0; s < staves.size(); ++s) {
            currentTime = 0.0f;
            staff = staves.at(s);
            voice = staff.getInstrument();

            for (size_t i = 0; i < staff.getMeasures().size(); ++i) {
                measure = staff.getMeasures().at(i);

                for (size_t j = 0; j < measure.getNotes().size(); ++j) {
                    note = measure.getNotes().at(j);

                    // Update attributes
                    if (as_int(note.getAttributes().dynamic) > 0) {
                        amplitude = as_int(note.getAttributes().dynamic) / 100.0f;
                    }
                    if (note.getAttributes().beatUnitsPerSecond > 0) {
                        beatUnitsPerSecond = note.getAttributes().beatUnitsPerSecond;
                    }


                    if (!note.isRest()) {
                        // Update synthesizer parameters
                        voice->setInternalParameterValue("amp", amplitude);

                        for (size_t k = 0; k < note.getFreqs().size(); ++k) {
                            voice->setInternalParameterValue("freq", note.getFreqs().at(k));
                            sequencer->addVoiceFromNow(
                                voice,
                                currentTime,
                                note.getBeatUnits() / beatUnitsPerSecond
                            );
                        }
                    }

                    currentTime += note.getBeatUnits() / beatUnitsPerSecond;
                }

            }
        }
    }

    void registerSynthSequencer(SynthSequencer& seq) { sequencer = &seq; }

    Measure& getMeasure(int measureNumber) { return this->staves.at(currentStaff).getMeasures().at(measureNumber); }
    Staff& getStaff(std::string name) { return this->staves.at(currentStaff); }

protected:
    SynthSequencer* sequencer{ nullptr };
    float amplitude;
    float beatUnitsPerSecond;
    float maxNoteSeparation;
    int currentStaff;
    std::vector<std::string> staffNames;
    std::vector<Staff> staves;
};


struct MyApp: public App {
    Score score;
    SynthSequencer seq;
    InstrumentCelesta* celesta;

    void onInit() override { // Called on app start
        std::cout << "onInit()" << std::endl;
        score = Score();
        score.registerSynthSequencer(seq);
        celesta = new InstrumentCelesta();

        // ---------------------------------------------------
        // BEGIN SCORE
        // ---------------------------------------------------

        score.addStaff(celesta, "CelestaRH");
        score.addStaff(celesta, "CelestaLH");

        score.setInitialTempo(NoteType::_eighth, 58.0f, true);
        score.setInitialDynamic(Dynamic::mf);

        score.setStaff("CelestaRH");
        score.addMeasure(TimeSignature(1, 8));
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        score.addMeasure(TimeSignature(3, 8));
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_quarter);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addDot();

        score.setStaff("CelestaLH");
        score.addMeasure(TimeSignature(1, 8));
        score.addRest(NoteType::_eighth);
        score.addMeasure(TimeSignature(3, 8));
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);

        // ---------------------------------------------------
        // END SCORE
        // ---------------------------------------------------
    }

    void onCreate() override { // Called when graphics context is available
        std::cout << "onCreate()" << std::endl;
        navControl().active(false);
        gam::sampleRate(audioIO().framesPerSecond());
        imguiInit();
    }

    void onAnimate(double dt) override { // Called once before drawing
        imguiBeginFrame();

        imguiEndFrame();
    }

    void onDraw(Graphics &g) override { // Draw function
        g.clear();
        seq.render(g);
        imguiDraw();
    }

    void onSound(AudioIOData &io) override { // Audio callback
        seq.render(io);
    }

    void onMessage(osc::Message &m) override { // OSC message callback
        m.print();
    }

    bool onKeyDown(Keyboard const &k) override {
        if (ParameterGUI::usingKeyboard()) {
            return true;
        }

        switch (k.key()) {
        case ' ':
            std::cout << "Spacebar pressed!" << std::endl;
            score.playScore();
        }
        return true;
    }

    Score& getScore() { return score; }

    void onExit() override
    {
        delete celesta;
        imguiShutdown();
    }
};


int main() {
    MyApp app;
    //Score& score = app.getScore();
    app.dimensions(800, 600);
    app.configureAudio(48000., 256, 2, 0);

    app.start();
    return 0;
}
