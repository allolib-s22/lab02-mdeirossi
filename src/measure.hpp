#ifndef MEASURE_HPP
#define MEASURE_HPP

#include "timeSignature.hpp"
#include "note.hpp"


class Measure
{
public:
    Measure();
    Measure(TimeSignature timeSignature);
    void addNote(Note note);
    void addRest(Rest rest);
    void addChord(NoteName name, Accidental accidental);
    void addDot();
    void addDoubleDot();
    void fillWithRests();
    void addTiedNote(Note note);
    void setDynamic(Dynamic dynamic);
    void setBeatUnitsPerSecond(float beatUnitsPerSecond);

    TimeSignature& getTimeSignature() { return this->timeSignature; }
    std::vector<Note>& getNotes() { return this->notes; }

protected:
    TimeSignature timeSignature;
    int beatUnitsRemaining;
    std::vector<Note> notes;
};

#endif
