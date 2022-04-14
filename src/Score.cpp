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

#include <cstdio>
#include <vector>
#include <cmath>

using namespace al;


#define A4_FREQ = 440.0f


class FM : public SynthVoice
{
public:
    // Unit generators
    gam::Pan<> mPan;
    gam::ADSR<> mAmpEnv;
    gam::ADSR<> mModEnv;
    gam::EnvFollow<> mEnvFollow;

    gam::Sine<> car, mod; // carrier, modulator sine oscillators

    // Additional members
    Mesh mMesh;

    void init() override
    {
        mAmpEnv.curve(0); // linear segments
        mAmpEnv.levels(0, 1, 1, 0);

        // We have the mesh be a sphere
        addDisc(mMesh, 1.0, 30);

        createInternalTriggerParameter("amplitude", 0.5, 0.0, 1.0);
        createInternalTriggerParameter("freq", 440, 10, 4000.0);
        createInternalTriggerParameter("attackTime", 0.1, 0.01, 3.0);
        createInternalTriggerParameter("releaseTime", 0.1, 0.1, 10.0);
        createInternalTriggerParameter("pan", 0.0, -1.0, 1.0);

        // FM index
        createInternalTriggerParameter("idx1", 0.01, 0.0, 10.0);
        createInternalTriggerParameter("idx2", 7, 0.0, 10.0);
        createInternalTriggerParameter("idx3", 5, 0.0, 10.0);

        createInternalTriggerParameter("carMul", 1, 0.0, 20.0);
        createInternalTriggerParameter("modMul", 1.0007, 0.0, 20.0);
        createInternalTriggerParameter("sustain", 0.75, 0.1, 1.0); // Unused
    }

    void onProcess(AudioIOData &io) override
    {
        float modFreq =
            getInternalParameterValue("freq") * getInternalParameterValue("modMul");
        mod.freq(modFreq);
        float carBaseFreq =
            getInternalParameterValue("freq") * getInternalParameterValue("carMul");
        float modScale =
            getInternalParameterValue("freq") * getInternalParameterValue("modMul");
        float amp = getInternalParameterValue("amplitude");
        while (io())
        {
            car.freq(carBaseFreq + mod() * mModEnv() * modScale);
            float s1 = car() * mAmpEnv() * amp;
            float s2;
            mEnvFollow(s1);
            mPan(s1, s1, s2);
            io.out(0) += s1;
            io.out(1) += s2;
        }
        if (mAmpEnv.done() && (mEnvFollow.value() < 0.001))
        {
            free();
        }
    }

    void onProcess(Graphics &g) override
    {
        g.pushMatrix();
        g.translate(getInternalParameterValue("freq") / 300 - 2,
                    getInternalParameterValue("modAmt") / 25 - 1, -4);
        float scaling = getInternalParameterValue("amplitude") * 1;
        g.scale(scaling, scaling, scaling * 1);
        g.color(HSV(getInternalParameterValue("modMul") / 20, 1,
                    mEnvFollow.value() * 10));
        g.draw(mMesh);
        g.popMatrix();
    }

    void onTriggerOn() override
    {
        mModEnv.levels()[0] = getInternalParameterValue("idx1");
        mModEnv.levels()[1] = getInternalParameterValue("idx2");
        mModEnv.levels()[2] = getInternalParameterValue("idx2");
        mModEnv.levels()[3] = getInternalParameterValue("idx3");

        mAmpEnv.lengths()[0] = getInternalParameterValue("attackTime");
        mModEnv.lengths()[0] = getInternalParameterValue("attackTime");

        mAmpEnv.lengths()[1] = 0.001;
        mModEnv.lengths()[1] = 0.001;

        mAmpEnv.lengths()[2] = getInternalParameterValue("releaseTime");
        mModEnv.lengths()[2] = getInternalParameterValue("releaseTime");
        mPan.pos(getInternalParameterValue("pan"));

        // mModEnv.lengths()[1] = mAmpEnv.lengths()[1];

        mAmpEnv.reset();
        mModEnv.reset();
    }

    void onTriggerOff() override
    {
        mAmpEnv.triggerRelease();
        mModEnv.triggerRelease();
    }
};

enum NoteName {
    C0 = 0, D0 = 2, E0 = 4, F0 = 5, G0 = 7, A0 = 9, B0 = 11,
    C1 = 12, D1 = 14, E1 = 16, F1 = 17, G1 = 19, A1 = 21, B1 = 23,
    C2 = 24, D2 = 26, E2 = 28, F2 = 29, G2 = 31, A2 = 33, B2 = 35,
    C3 = 36, D3 = 38, E3 = 40, F3 = 41, G3 = 43, A3 = 45, B3 = 47,
    C4 = 48, D4 = 50, E4 = 52, F4 = 53, G4 = 55, A4 = 57, B4 = 59,
    C5 = 60, D5 = 62, E5 = 64, F5 = 65, G5 = 67, A5 = 69, B5 = 71,
    C6 = 72, D6 = 74, E6 = 76, F6 = 77, G6 = 79, A6 = 81, B6 = 83,
    C7 = 84, D7 = 86, E7 = 88, F7 = 89, G7 = 91, A7 = 93, B7 = 95,
    C8 = 96, D8 = 98, E8 = 100, F8 = 101, G8 = 103, A8 = 105, B8 = 107
};

enum NoteType {
    _1024th = 1,
    _512th = 2,
    _256th = 4,
    _128th = 8,
    _64th = 16,
    _32nd = 32,
    _16th = 64,
    _eighth = 128,
    _quarter = 256,
    _half = 512,
    _whole = 1024,
    _breve = 2048,
    _long = 4096,
    _maxima = 8192
};

enum Accidental {
    doubleFlat = 0,
    flat = 1,
    natural = 2,
    sharp = 3,
    doubleSharp = 4
};


class TimeSignature {
    TimeSignature(int numBeats, int beatType) {
        if (numBeats < 1 || beatType < 1) {
            throw std::invalid_argument("TimeSignature arguments must be greater than 0");
        }
        if ((beatType & (beatType - 1)) != 0) {
            throw std::invalid_argument("TimeSignature beatType must be a power of 2");
        }
        this->numBeats = numBeats;
        this->beatType = beatType;
        this->beatUnits = (4.0f / beatType) * numBeats * 256
    }

    int getBeatUnits() { return this->beatUnits; }

    protected:
        int numBeats;
        int beatType;
        int beatUnits;
};


class Note {
    public:
        Note(NoteName noteName,
             Accidental accidental,
             NoteType noteType,
             float amplitude,
            )
        {
            this->freqs->push_back((A4_FREQ * pow(2, (noteName[i] - 57 + accidental[i] - 2) / 12));
            this->amplitude = amplitude;
            this->beatUnits = noteType;
            this->rest = true;
        }

        Note(int chordSize,
             NoteName[] noteNames,
             Accidental[] accidentals,
             NoteType noteType,
             float amplitude
            )
        {
            for (size_t i = 0; i < chordSize; ++i) {
                this->freqs->push_back((A4_FREQ * pow(2, (noteName[i] - 57 + accidental[i] - 2) / 12));
            }
            this->amplitude = amplitude;
            this->beatUnits = noteType;
            this->rest = false;
        }

        void addDot() {
            if ((beatUnits & (beatUnits - 1)) != 0) {
                throw std::logic_error("Cannot add dot to dotted note. Try addDoubleDot()");
            }
            if (beatUnits < 2) {
                throw std::logic_error("Note duration too small");
            }
            beatUnits += (beatUnits / 2);
        }

        void addDoubleDot() {
            if ((beatUnits & (beatUnits - 1)) != 0) {
                throw std::logic_error("Cannot add dot to dotted note");
            }
            if (beatUnits < 4) {
                throw std::logic_error("Note duration too small");
            }
            beatUnits += (beatUnits / 2 + beatUnits / 4);
        }

        std::vector<float>* getFreqs() { return this->freqs; }
        float getAmplitude() { return this->amplitude; }
        int getBeatUnits() { return this->beatUnits; }

    protected:
        std::vector<float>* freqs;
        float amplitude;
        int beatUnits;
        bool rest;
};


class Rest: public Note {
    public:
        Rest(NoteType noteType) {
            this->beatUnits = noteType;
            this->rest = true;
        }
};


class Measure {
    public:
        Measure(TimeSignature timeSignature) {
            this->ts = timeSignature;
            this->beatUnitsRemaining = timeSignature.getBeatUnits();
        }

        void addNote(Note* note) {
            if (note->getBeatUnits() > beatUnitsRemaining) {
                throw std::logic_error("Note length exceeds measure");
            }
            notes->push_back(note);
            beatUnitsRemaining -= note->getBeatUnits();
        }

        void addDot() {
            if ((notes->back()->getBeatUnits() / 2) > beatUnitsRemaining) {
                throw std::logic_error("Note length exceeds measure");
            }
            notes->back()->addDot();
            beatUnitsRemaining -= (notes->back()->getBeatUnits() / 2);
        }

        void addDoubleDot() {
            if ((notes->back()->getBeatUnits() / 2 + notes->back()->getBeatUnits() / 4) > beatUnitsRemaining) {
                throw std::logic_error("Note length exceeds measure");
            }
            notes->back()->addDoubleDot();
            beatUnitsRemaining -= (notes->back()->getBeatUnits() / 2 + notes->back()->getBeatUnits() / 4);
        }

        void fillRests() {

        }

        TimeSignature getTimeSignature() { return this->ts; }
        std::vector<Note*>* getNotes() { return this->notes; }

    protected:
        TimeSignature ts;
        std::vector<Note*>* notes;
        int beatUnitsRemaining;
};


class Score {
    public:
        Score(&synthManager) {
            this->synthManager = synthManager;
            initialBPM(60.0f);
            maxNoteSeparation(0.5f);
        }

        void addMeasure(TimeSignature timeSignature) {
            measures->push_back(Measure(timeSignature));
        }

        void setInitialBPM(float initialBPM) {
            this->initialBPM = initialBPM;
        }

        void setMaxNoteSeparation(float maxNoteSeparation) {
            this->maxNoteSeparation = maxNoteSeparation;
        }

        void playScore() {
            SynthVoice* voice;
            Measure* measure;
            Note note;
            float BPS = (initialBPM / 60.0f)
            float currentTime = 0.0f;
            for (size_t i = 0; i < measures->size(); ++i) {
                measure = measures->at(i);

                for (size_t j = 0; j < measure->getNotes()->size(); ++j) {
                    note = measure->getNotes()->at(j);

                    voice = synthManager->synth().getVoice<FM>();
                    voice->setInternalParameterValue("amplitude", note.getAmplitude());
                    voice->setInternalParameterValue("attackTime", 0.1);
                    voice->setInternalParameterValue("releaseTime", 0.1);
                    voice->setInternalParameterValue("pan", -1.0);


                    for (size_t k = 0; k < note.getNotes()->size(); ++k) {
                        voice->setInternalParameterValue("frequency", note.getFreqs()->at(k));
                        synthManager->synthSequencer().addVoiceFromNow(
                            voice,
                            note.getQuarterStartBeat() / BPS + currentTime,
                            note.getQuarterBeatDuration() / BPS
                        );
                    }
                    
                    currentTime += note.getQuarterBeatDuration() / BPS;
                }

            }
        }

        std::vector<Measure*>* getMeasures() { return this->measures; }
        Measure* getMeasure(int measureNumber) { return this->measures->at(measureNumber); }

    protected:
        SynthGUIManager<FM>* synthManager;
        float initialBPM;
        float maxNoteSeparation;
        std::vector<Measure*>* measures;
};


struct MyApp: public App {
    Score score;
    SynthGUIManager<FM> synthManager{"FM"};

    void onInit() override { // Called on app start
        std::cout << "onInit()" << std::endl;
        score = Score();
        score.addMeasure(TimeSignature(4, 4));
        score.getMeasure(0)->addNote(Note(2, {C4, E4}, {natural, flat}, _quarter, 0.5f));
        score.getMeasure(0)->addNote(Note(1, {G4}, {natural}, _quarter, 0.5f));
    }

    void onCreate() override { // Called when graphics context is available
        std::cout << "onCreate()" << std::endl;
        navControl().active(false); // Disable navigation via keyboard
        // Set sampling rate for Gamma objects from app's audio
        gam::sampleRate(audioIO().framesPerSecond());

        imguiInit();
    }

    void onAnimate(double dt) override { // Called once before drawing
        // The GUI is prepared here
        imguiBeginFrame();
        // Draw a window that contains the synth control panel
        synthManager.drawSynthControlPanel();
        imguiEndFrame();
    }

    void onDraw(Graphics &g) override { // Draw function
        g.clear();
        // Render the synth's graphics
        synthManager.render(g);

        // GUI is drawn here
        imguiDraw();
    }

    void onSound(AudioIOData &io) override { // Audio callback
        synthManager.render(io);
    }

    void onMessage(osc::Message &m) override { // OSC message callback
        m.print();
    }

    bool onKeyDown(Keyboard const &k) override {
        if (ParameterGUI::usingKeyboard()) {
            return true;
        }

        switch (k.key()) {
            case '1':
                std::cout << "1 pressed!" << std::endl;
                score.playScore();
                return false;
            case ' ':
                std::cout << "Spacebar pressed!" <<std::endl;
        return true;
    }

    // Whenever a key is released this function is called
    bool onKeyUp(Keyboard const &k) override {
        // int midiNote = asciiToMIDI(k.key());
        // if (midiNote > 0)
        // {
        //   synthManager.triggerOff(midiNote);
        // }
        // return true;
    }

    void onExit() override { imguiShutdown(); }
};


int main() {
    // Create app instance
    MyApp app;

    // Set up audio
    app.configureAudio(48000., 256, 2, 0);

    app.start();
    return 0;
}