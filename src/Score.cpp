#include "al/app/al_App.hpp"
#include "al/scene/al_PolySynth.hpp"
#include "Gamma/Oscillator.h"

#include <vector>
#include <cmath>

using namespace al;


#define A4_FREQ = 440.0f

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


enum Accidental {
    doubleFlat = 0,
    flat = 1,
    natural = 2,
    sharp = 3,
    doubleSharp = 4
};


struct TimeSignature {
    int numBeats;
    int beatType;
};


class Note {
    public:
        Note(NoteName note,
             Accidental accidental = natural,
             float amplitude,
             float beatDuration,
             float lengthModifier,
             bool accent,
             bool fullDuration
            )
        {
            this->freq = A4_FREQ * pow(2, (note - 57 + accidental - 2) / 12)
            this->amplitude = amplitude;
            this->length = beatDuration * lengthModifier;
            this->accent = accent;
            this->fullDuration = fullDuration;
        }

    protected:
        float freq;
        float amplitude;
        float length;
        bool accent;
        bool fullDuration;
};


class Measure {
    public:
        Measure(TimeSignature timeSignature) {
            this->ts = timeSignature;
        }

        void setTimeSignature(int numBeats, int beatType) {
            assert(numBeats > 0);
            // Check if beatType is a power of 2
            assert(beatType > 0 && ((beatType & (beatType - 1)) == 0));
            ts.numBeats = numBeats;
            ts.beatType = beatType;
        }

        void addNote(Note note) {
            notes->push_back(note);
        }

        TimeSignature getTimeSignature() { return this->ts; }
        std::vector<Note>* getNotes() { return this->notes; }

    protected:
        TimeSignature ts;
        std::vector<Note> *notes;
};


class Score {
    public:
        Score() {
            maxNoteSeparation(0.5f);
        }

        void setMaxNoteSeparation(float maxNoteSeparation) {
            this->maxNoteSeparation = maxNoteSeparation;
        }

        void playScore() {
            float currentTime = 0.0f;
            for (size_t i = 0; i < measures.size(); ++i) {
                for (size_t j = 0; j < measures[i].getNotes().size(); ++j) {

                }               

                currentTime += measures[i].getTimeSignature();
            }
        }

    protected:
        float maxNoteSeparation;
        std::vector<Measure> *measures;
};


struct MyApp: public App {
    float color = 0.0;
    gam::Sine<> oscillator;

    void onInit() override { // Called on app start
        std::cout << "onInit()" << std::endl;
    }

    void onCreate() override { // Called when graphics context is available
        std::cout << "onCreate()" << std::endl;
    }

    void onAnimate(double dt) override { // Called once before drawing
        color += 0.01;
        if (color > 1.0) {
            color -= 1.0;
        }
        oscillator.freq(220 + 880 * color);
    } 

    void onDraw(Graphics &g) override { // Draw function
        g.clear(color);
    }

    void onSound(AudioIOData &io) override { // Audio callback
        while (io()) {
            io.out(0) = oscillator() * 0.1;
        }
    }

    void onMessage(osc::Message &m) override { // OSC message callback
        m.print();
    }
};


int main() {
    MyApp app;
    auto dev = AudioDevice("devicename");
    app.configureAudio(dev, 44100, 256, 2, 2);

    app.start();
    return 0;
}