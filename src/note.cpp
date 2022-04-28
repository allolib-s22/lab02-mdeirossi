#include "note.hpp"


Note::Note(NoteName name,
    Accidental accidental,
    NoteType type
)
{
    this->name = name;
    this->accidental = accidental;
    this->type = type;
    this->freqs.push_back((A4_FREQ * pow(2.0f, (as_int(name) - 57.0f + as_int(accidental) - 2.0f) / 12.0f)));
    this->attributes = NoteAttributes();
    this->beatUnits = as_int(type);
    this->durationModifier = 0;
    this->rest = false;
    this->pedalOn = false;
}

Note::Note(NoteName name,
    Accidental accidental,
    NoteType type,
    NoteAttributes attributes
)
{
    this->name = name;
    this->accidental = accidental;
    this->type = type;
    this->freqs.push_back((A4_FREQ * pow(2.0f, (as_int(name) - 57.0f + as_int(accidental) - 2.0f) / 12.0f)));
    this->attributes = attributes;
    this->beatUnits = as_int(type);
    this->durationModifier = 0;
    this->rest = false;
    this->pedalOn = false;
}

void Note::addChord(NoteName name, Accidental accidental)
{
    freqs.push_back((A4_FREQ * pow(2.0f, (as_int(name) - 57.0f + as_int(accidental) - 2.0f) / 12.0f)));
}

void Note::addDot()
{
    if (durationModifier != 0) {
        std::cerr << "Dot must be added before other modifiers" << std::endl;
        throw std::logic_error("Dot must be added before other modifiers");
    }
    if ((beatUnits & (beatUnits - 1)) != 0) {
        std::cerr << "Cannot add dot to dotted note. Try addDoubleDot()" << std::endl;
        throw std::logic_error("Cannot add dot to dotted note. Try addDoubleDot()");
    }
    if (beatUnits < 2) {
        std::cerr << "Note duration too small" << std::endl;
        throw std::logic_error("Note duration too small");
    }
    beatUnits += (beatUnits / 2);
}

void Note::addDoubleDot()
{
    if (durationModifier != 0) {
        std::cerr << "Dot must be added before other modifiers" << std::endl;
        throw std::logic_error("Dot must be added before other modifiers");
    }
    if ((beatUnits & (beatUnits - 1)) != 0) {
        std::cerr << "Cannot add dot to dotted note" << std::endl;
        throw std::logic_error("Cannot add dot to dotted note");
    }
    if (beatUnits < 4) {
        std::cerr << "Note duration too small" << std::endl;
        throw std::logic_error("Note duration too small");
    }
    beatUnits += (beatUnits / 2 + beatUnits / 4);
}

void Note::addTiedNote(NoteType type)
{

}
