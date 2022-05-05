#ifndef SCORE_HPP
#define SCORE_HPP

#include "al/scene/al_SynthSequencer.hpp"
#include "al/ui/al_ControlGUI.hpp"
#include "al/ui/al_Parameter.hpp"

#include "staff.hpp"
#include "instruments/Celesta.hpp"
#include "instruments/Trumpet.hpp"
#include "instruments/MutedTrumpet.hpp"

#include <cstdio>
#include <vector>
#include <cmath>


class Score
{
public:
    Score();

    void addStaff(Instrument instrument, std::string name);
    void setStaff(std::string name);

    void addMeasure(TimeSignature timeSignature);
    void addMeasure();
    void addNote(NoteName name, Accidental accidental, NoteType type);
    void addChord(NoteName name, Accidental accidental);
    void addRest(NoteType type);
    void addDot();
    void addDoubleDot();

    void addTuplet(int numNotes, NoteType type, bool dotted);
    void addTiedNote(NoteName name, Accidental accidental, NoteType type);
    void addTiedChord(NoteName name, Accidental accidental);

    void fillWithRests();
    

    void setDynamic(Dynamic dynamic);
    void setTempo(NoteType type, float BPM, bool dotted);
    void setMaxNoteSeparation(float maxNoteSeparation);
    
    void loadScore();
    void playScore();

    void registerSynthSequencer(SynthSequencer& seq) { sequencer = &seq; }
    Staff& getStaff(std::string name) { return *(this->currentStaff); }

protected:
    SynthSequencer* sequencer{ nullptr };
    float amplitude;
    float beatUnitsPerSecond;
    float maxNoteSeparation;
    Staff* currentStaff;
    std::vector<std::string> staffNames;
    std::vector<Staff> staves;
};

#endif
