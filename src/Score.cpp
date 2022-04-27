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

    void addStaff(Instrument instrument, std::string name)
    {
        if (std::find(staffNames.begin(), staffNames.end(), name) != staffNames.end()) {
            std::cerr << "Staff with name " << name << " already exists" << std::endl;
            throw std::invalid_argument("Staff with name " + name + " already exists");
        }
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
        if (staves.at(currentStaff).getMeasures().size() > 0) {
            if (staves.at(currentStaff).getMeasures().back().getBeatUnitsRemaining() > 0) {
                std::cerr << "Current measure is not filled" << std::endl;
                throw std::logic_error("Current measure is not filled");
            }
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
        if (staves.at(currentStaff).getMeasures().back().getBeatUnitsRemaining() > 0) {
            std::cerr << "Current measure is not filled" << std::endl;
            throw std::logic_error("Current measure is not filled");
        }
        staves.at(currentStaff).getMeasures().push_back(Measure(staves.at(currentStaff).getMeasures().back().getTimeSignature()));
    }

    void addNote(NoteName name, Accidental accidental, NoteType type)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        if (staves.at(currentStaff).getMeasures().size() < 1) {
            std::cerr << "No measure in staff" << std::endl;
            throw std::invalid_argument("No measure in staff");
        }
        staves.at(currentStaff).getMeasures().back().addNote(Note(name, accidental, type));
    }

    void addChord(NoteName name, Accidental accidental)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        if (staves.at(currentStaff).getMeasures().size() < 1) {
            std::cerr << "No measure in staff" << std::endl;
            throw std::invalid_argument("No measure in staff");
        }
        staves.at(currentStaff).getMeasures().back().addChord(name, accidental);
    }

    void addRest(NoteType type)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        if (staves.at(currentStaff).getMeasures().size() < 1) {
            std::cerr << "No measure in staff" << std::endl;
            throw std::invalid_argument("No measure in staff");
        }
        staves.at(currentStaff).getMeasures().back().addRest(Rest(type));
    }

    void addDot()
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        if (staves.at(currentStaff).getMeasures().size() < 1) {
            std::cerr << "No measure in staff" << std::endl;
            throw std::invalid_argument("No measure in staff");
        }
        staves.at(currentStaff).getMeasures().back().addDot();
    }

    void addDoubleDot()
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        if (staves.at(currentStaff).getMeasures().size() < 1) {
            std::cerr << "No measure in staff" << std::endl;
            throw std::invalid_argument("No measure in staff");
        }
        staves.at(currentStaff).getMeasures().back().addDoubleDot();
    }

    void fillWithRests()
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        if (staves.at(currentStaff).getMeasures().size() < 1) {
            std::cerr << "No measure in staff" << std::endl;
            throw std::invalid_argument("No measure in staff");
        }
        staves.at(currentStaff).getMeasures().back().fillWithRests();
    }

    void addTiedNote(NoteName name, NoteType type)
    {
        if (staffNames.size() < 1) {
            std::cerr << "No staves exist" << std::endl;
            throw std::invalid_argument("No staves exist");
        }
        if (staves.at(currentStaff).getMeasures().size() < 1) {
            std::cerr << "No measure in staff" << std::endl;
            throw std::invalid_argument("No measure in staff");
        }
        Note* prevNote;
        std::vector<Measure>& measures = staves.at(currentStaff).getMeasures();
        if (measures.back().getNotes().size() < 1) {
            if (measures.size() < 1) {
                std::cerr << "No note to tie from" << std::endl;
                throw std::invalid_argument("No note to tie from");
            }
            prevNote = &measures.at(measures.size() - 1).getNotes().back();
        }
        else {
            prevNote = &measures.back().getNotes().back();
        }
        
        measures.back().addTiedNote(Note(prevNote->getNoteName(), prevNote->getAccidental(), type));
    }

    void setDynamic(Dynamic dynamic)
    {
        if (staffNames.size() < 1) {
            this->amplitude = as_int(dynamic) / 100.0f;
        }
        else {
            staves.at(currentStaff).getMeasures().back().setDynamic(dynamic);
        }
    }

    void setTempo(NoteType type, float BPM, bool dotted = false)
    {
        float typeValue = (dotted) ? (as_int(type) / 2.0f + as_int(type)) : as_int(type);
        float bps = (BPM / 60.0f) * (typeValue / 256.0f) * 256.0f;
        if (staves.at(currentStaff).getMeasures().size() < 1 || staves.at(currentStaff).getMeasures().back().getNotes().size() < 1) {
            this->beatUnitsPerSecond = bps;
        }
        else {
            staves.at(currentStaff).getMeasures().back().setBeatUnitsPerSecond(bps);
        }
    }

    void setMaxNoteSeparation(float maxNoteSeparation)
    {
        this->maxNoteSeparation = maxNoteSeparation;
    }

    void loadScore()
    {
        SynthVoice* voice;
        Staff staff;
        Measure measure;
        Note note;
        float currentTime;

        for (size_t s = 0; s < staves.size(); ++s) {
            currentTime = 0.0f;
            staff = staves.at(s);

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

                        for (size_t k = 0; k < note.getFreqs().size(); ++k) {
                            switch (staff.getInstrument()) {
                            case Instrument::Celesta:
                                voice = sequencer->synth().getVoice<InstrumentCelesta>();
                                break;
                            default:
                                std::cerr << "Could not find voice for instrument" << std::endl;
                                throw std::logic_error("Could not find voice for instrument");
                            }
                            voice->setInternalParameterValue("freq", note.getFreqs().at(k));
                            voice->setInternalParameterValue("amp", amplitude);

                            sequencer->addVoice(
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

    void playScore()
    {
        loadScore();
        sequencer->playSequence();
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

    std::list<SynthSequencerEvent> events;
};


struct MyApp: public App {
    Score score;
    SynthSequencer seq;

    void onInit() override { // Called on app start
        std::cout << "onInit()" << std::endl;
        score = Score();
        score.registerSynthSequencer(seq);

        // ------------------------------
// Instrument List
// ------------------------------

        score.addStaff(Instrument::Celesta, "Celesta-P25");
        score.addStaff(Instrument::Celesta, "Celesta-P26");

        score.setTempo(NoteType::_quarter, 58.0f, true);

        // ------------------------------
        // Parts
        // ------------------------------


        // Celesta-P25
        score.setStaff("Celesta-P25");
        // m1
        score.addMeasure(TimeSignature(3, 8));
        score.addRest(NoteType::_eighth);
        score.addRest(NoteType::_eighth);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        // m2
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_eighth);
        // m3
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
        // m4
        score.addMeasure();
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m5
        score.addMeasure();
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_quarter);
        score.addDot();
        // m6
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_eighth);
        // m7
        score.addMeasure();
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_quarter);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
        // m8
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m9
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        // m10
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_eighth);
        // m11
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
        // m12
        score.addMeasure();
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::D6, Accidental::flat, NoteType::_eighth);
        // m13
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::A5, Accidental::flat, NoteType::_eighth);
        // m14
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::A5, Accidental::sharp, NoteType::_eighth);
        // m15
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_quarter);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        // m16
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m17
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        // m18
        score.addMeasure();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        // m19
        score.addMeasure();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        // m20
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
        // m21
        score.addMeasure();
        score.addNote(NoteName::A5, Accidental::sharp, NoteType::_quarter);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_eighth);
        // m22
        score.addMeasure();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::A5, Accidental::sharp, NoteType::_eighth);
        // m23
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_quarter);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        // m24
        score.addMeasure();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m25
        score.addMeasure();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        // m26
        score.addMeasure();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        // m27
        score.addMeasure();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        // m28
        score.addMeasure();
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::D6, Accidental::flat, NoteType::_eighth);
        // m29
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::A5, Accidental::flat, NoteType::_eighth);
        // m30
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::A5, Accidental::sharp, NoteType::_eighth);
        // m31
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_quarter);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        // m32
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m33
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m34
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m35
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m36
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        // m37
        score.addMeasure();
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        // m38
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        // m39
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A3, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C4, Accidental::natural, NoteType::_32nd);
        // m40
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        // m41
        score.addMeasure();
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
        // m42
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        // m43
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D4, Accidental::sharp, NoteType::_32nd);
        // m44
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        // m45
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        // m46
        score.addMeasure();
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        // m47
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        // m48
        score.addMeasure();
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        // m49
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
        // m50
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        // m51
        score.addMeasure();
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        // m52
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_eighth);
        // m53
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        // m54
        score.addMeasure();
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        // m55
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        // m56
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        // m57
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_32nd);
        // m58
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        // m59
        score.addMeasure();
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::flat, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        // m60
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
        // m61
        score.addMeasure();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::E6, Accidental::natural, NoteType::_eighth);
        // m62
        score.addMeasure();
        score.addNote(NoteName::G6, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::E6, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
        // m63
        score.addMeasure();
        score.addNote(NoteName::C6, Accidental::sharp, NoteType::_eighth);
        score.addNote(NoteName::A5, Accidental::sharp, NoteType::_eighth);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_eighth);
        // m64
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        // m65
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_eighth);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::B5, Accidental::flat, NoteType::_eighth);
        // m66
        score.addMeasure();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        // m67
        score.addMeasure();
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::sharp, NoteType::_32nd);
        // m68
        score.addMeasure();
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_eighth);
        // m69
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        // m70
        score.addMeasure();
        score.addNote(NoteName::B5, Accidental::flat, NoteType::_eighth);
        score.addNote(NoteName::D5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
        // m71
        score.addMeasure();
        score.addNote(NoteName::A5, Accidental::flat, NoteType::_eighth);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_eighth);
        score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
        // m72
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::natural, NoteType::_eighth);
        score.addChord(NoteName::C5, Accidental::natural);
        score.addChord(NoteName::E5, Accidental::natural);
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_eighth);
        score.addChord(NoteName::A4, Accidental::natural);
        score.addChord(NoteName::C5, Accidental::natural);
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_eighth);
        score.addChord(NoteName::C5, Accidental::sharp);
        score.addChord(NoteName::F5, Accidental::sharp);
        // m73
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_eighth);
        score.addChord(NoteName::F4, Accidental::sharp);
        score.addChord(NoteName::A4, Accidental::sharp);
        score.addNote(NoteName::C4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::D4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::D4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::E4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
        // m74
        score.addMeasure();
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::A5, Accidental::sharp, NoteType::_32nd);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
        score.addNote(NoteName::D6, Accidental::sharp, NoteType::_32nd);
        // m75
        score.addMeasure();
        score.addNote(NoteName::E6, Accidental::natural, NoteType::_eighth);
        score.addRest(NoteType::_eighth);
        score.addRest(NoteType::_eighth);
        // m76
        score.addMeasure();
        score.fillWithRests();

        // Celesta-P26
        score.setStaff("Celesta-P26");
        // m1
        score.addMeasure(TimeSignature(3, 8));
        score.fillWithRests();
        // m2
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m3
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m4
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m5
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m6
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m7
        score.addMeasure();
        score.addNote(NoteName::A4, Accidental::sharp, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        // m8
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m9
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        // m10
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m11
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        // m12
        score.addMeasure();
        score.addNote(NoteName::D4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addChord(NoteName::G4, Accidental::natural);
        score.addChord(NoteName::B4, Accidental::flat);
        score.addChord(NoteName::D5, Accidental::natural);
        score.addChord(NoteName::G5, Accidental::natural);
        // m13
        score.addMeasure();
        score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addChord(NoteName::F4, Accidental::natural);
        score.addChord(NoteName::A4, Accidental::flat);
        score.addChord(NoteName::C5, Accidental::natural);
        score.addChord(NoteName::F5, Accidental::natural);
        // m14
        score.addMeasure();
        score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addChord(NoteName::E4, Accidental::natural);
        score.addChord(NoteName::A4, Accidental::natural);
        score.addChord(NoteName::C5, Accidental::natural);
        score.addChord(NoteName::E5, Accidental::natural);
        // m15
        score.addMeasure();
        score.addNote(NoteName::C4, Accidental::sharp, NoteType::_quarter);
        score.addDot();
        score.addChord(NoteName::E4, Accidental::natural);
        score.addChord(NoteName::F4, Accidental::sharp);
        // m16
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m17
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        // m18
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m19
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        // m20
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m21
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        // m22
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m23
        score.addMeasure();
        score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m24
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m25
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        // m26
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m27
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m28
        score.addMeasure();
        score.addNote(NoteName::D4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addChord(NoteName::G4, Accidental::natural);
        score.addChord(NoteName::B4, Accidental::flat);
        score.addChord(NoteName::D5, Accidental::natural);
        score.addChord(NoteName::G5, Accidental::natural);
        // m29
        score.addMeasure();
        score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addChord(NoteName::F4, Accidental::natural);
        score.addChord(NoteName::A4, Accidental::flat);
        score.addChord(NoteName::C5, Accidental::natural);
        score.addChord(NoteName::F5, Accidental::natural);
        // m30
        score.addMeasure();
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addChord(NoteName::E4, Accidental::natural);
        score.addChord(NoteName::G4, Accidental::natural);
        score.addChord(NoteName::B4, Accidental::natural);
        score.addChord(NoteName::E5, Accidental::natural);
        // m31
        score.addMeasure();
        score.addNote(NoteName::C4, Accidental::sharp, NoteType::_quarter);
        score.addDot();
        score.addChord(NoteName::E4, Accidental::natural);
        score.addChord(NoteName::F4, Accidental::sharp);
        // m32
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m33
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        // m34
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
        // m35
        score.addMeasure();
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        // m36
        score.addMeasure();
        score.fillWithRests();
        // m37
        score.addMeasure();
        score.fillWithRests();
        // m38
        score.addMeasure();
        score.fillWithRests();
        // m39
        score.addMeasure();
        score.fillWithRests();
        // m40
        score.addMeasure();
        score.fillWithRests();
        // m41
        score.addMeasure();
        score.fillWithRests();
        // m42
        score.addMeasure();
        score.fillWithRests();
        // m43
        score.addMeasure();
        score.fillWithRests();
        // m44
        score.addMeasure();
        score.fillWithRests();
        // m45
        score.addMeasure();
        score.fillWithRests();
        // m46
        score.addMeasure();
        score.fillWithRests();
        // m47
        score.addMeasure();
        score.fillWithRests();
        // m48
        score.addMeasure();
        score.fillWithRests();
        // m49
        score.addMeasure();
        score.fillWithRests();
        // m50
        score.addMeasure();
        score.fillWithRests();
        // m51
        score.addMeasure();
        score.fillWithRests();
        // m52
        score.addMeasure();
        score.fillWithRests();
        // m53
        score.addMeasure();
        score.fillWithRests();
        // m54
        score.addMeasure();
        score.fillWithRests();
        // m55
        score.addMeasure();
        score.fillWithRests();
        // m56
        score.addMeasure();
        score.fillWithRests();
        // m57
        score.addMeasure();
        score.fillWithRests();
        // m58
        score.addMeasure();
        score.fillWithRests();
        // m59
        score.addMeasure();
        score.fillWithRests();
        // m60
        score.addMeasure();
        score.fillWithRests();
        // m61
        score.addMeasure();
        score.fillWithRests();
        // m62
        score.addMeasure();
        score.fillWithRests();
        // m63
        score.addMeasure();
        score.fillWithRests();
        // m64
        score.addMeasure();
        score.fillWithRests();
        // m65
        score.addMeasure();
        score.fillWithRests();
        // m66
        score.addMeasure();
        score.fillWithRests();
        // m67
        score.addMeasure();
        score.fillWithRests();
        // m68
        score.addMeasure();
        score.fillWithRests();
        // m69
        score.addMeasure();
        score.fillWithRests();
        // m70
        score.addMeasure();
        score.fillWithRests();
        // m71
        score.addMeasure();
        score.fillWithRests();
        // m72
        score.addMeasure();
        score.fillWithRests();
        // m73
        score.addMeasure();
        score.fillWithRests();
        // m74
        score.addMeasure();
        score.fillWithRests();
        // m75
        score.addMeasure();
        score.fillWithRests();
        // m76
        score.addMeasure();
        score.fillWithRests();

        return;

        // ---------------------------------------------------
        // BEGIN SCORE
        // ---------------------------------------------------

        score.addStaff(Instrument::Celesta, "CelestaRH");
        score.addStaff(Instrument::Celesta, "CelestaLH");

        score.setTempo(NoteType::_eighth, 58.0f, true);
        score.setDynamic(Dynamic::mp);

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
        score.addMeasure();
        score.addRest(NoteType::_quarter);
        score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
        score.addDot();
        score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
        score.addNote(NoteName::F5, Accidental::sharp, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::D6, Accidental::natural, NoteType::_quarter);
        score.addNote(NoteName::D6, Accidental::flat, NoteType::_eighth);


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
        score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
        score.addDot();
        score.addMeasure();
        score.addNote(NoteName::D4, Accidental::natural, NoteType::_quarter);
        score.addDot();

        // ---------------------------------------------------
        // END SCORE
        // ---------------------------------------------------
    }

    void onCreate() override { // Called when graphics context is available
        std::cout << "onCreate()" << std::endl;
        navControl().active(false);
        gam::sampleRate(audioIO().framesPerSecond());
        imguiInit();

        seq.verbose(true);
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

    void onExit() override
    {
        imguiShutdown();
    }
};


int main() {
    MyApp app;
    app.dimensions(800, 600);
    app.configureAudio(48000., 256, 2, 0);

    app.start();
    return 0;
}
