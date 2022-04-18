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

    void setDynamic(Dynamic dynamic) { attributes.dynamic = dynamic; }

    std::vector<float>& getFreqs() { return this->freqs; }
    NoteAttributes& getAttributes() { return this->attributes; }
    int getBeatUnits() { return this->beatUnits; }
    bool isRest() { return this->rest; }

protected:
    std::vector<float> freqs;
    NoteAttributes attributes;
    int beatUnits;
    bool rest;
};


class Rest : public Note
{
public:
    Rest() { rest = true; }
    Rest(NoteType type)
    {
        beatUnits = as_int(type);
        rest = true;
    }
};


#endif
