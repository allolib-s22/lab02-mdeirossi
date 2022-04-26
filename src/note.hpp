#ifndef NOTE_HPP
#define NOTE_HPP

#include <vector>
#include <iostream>
#include <stdexcept>

#include "definitions.hpp"


struct NoteAttributes
{
    Dynamic dynamic;
    float beatUnitsPerSecond;
    bool beginTie;
    bool endTie;
};


class Note
{
public:
    Note() { }
    Note(NoteName name, Accidental accidental, NoteType type);
    Note(NoteName name, Accidental accidental, NoteType type, NoteAttributes attributes);

    void addChord(NoteName name, Accidental accidental);
    void addDot();
    void addDoubleDot();
    void addTiedNote(NoteType type);

    void setDynamic(Dynamic dynamic) { attributes.dynamic = dynamic; }

    NoteName getNoteName() { return this->name; }
    Accidental getAccidental() { return this->accidental; }
    NoteType getNoteType() { return this->type; }

    std::vector<float>& getFreqs() { return this->freqs; }
    NoteAttributes& getAttributes() { return this->attributes; }
    int getBeatUnits() { return this->beatUnits; }
    bool isRest() { return this->rest; }

protected:
    NoteName name;
    Accidental accidental;
    NoteType type;
    std::vector<float> freqs;
    NoteAttributes attributes;
    int beatUnits;
    int durationModifier;
    bool rest;
};


class Rest : public Note
{
public:
    Rest() { rest = true; }
    Rest(NoteType type)
    {
        attributes = NoteAttributes();
        beatUnits = as_int(type);
        rest = true;
    }
};


#endif
