#include "measure.hpp"


Measure::Measure()
{
    this->timeSignature = TimeSignature();
    this->beatUnitsRemaining = 1024;
}

Measure::Measure(TimeSignature timeSignature)
{
    this->timeSignature = timeSignature;
    this->beatUnitsRemaining = timeSignature.getBeatUnits();
}

void Measure::addNote(Note note)
{
    if (note.getBeatUnits() > beatUnitsRemaining) {
        std::cerr << "Note length exceeds measure" << std::endl;
        throw std::logic_error("Note length exceeds measure");
    }
    beatUnitsRemaining -= note.getBeatUnits();
    notes.push_back(note);
}

void Measure::addRest(Rest rest)
{
    if (rest.getBeatUnits() > beatUnitsRemaining) {
        std::cerr << "Note length exceeds measure" << std::endl;
        throw std::logic_error("Note length exceeds measure");
    }
    beatUnitsRemaining -= rest.getBeatUnits();
    notes.push_back(rest);
}

void Measure::addChord(NoteName name, Accidental accidental)
{
    if (notes.size() < 1) {
        std::cerr << "No existing note to make a chord" << std::endl;
        throw std::logic_error("No existing note to make a chord");
    }
    notes.back().addChord(name, accidental);
}

void Measure::addDot()
{
    if ((notes.back().getBeatUnits() / 2) > beatUnitsRemaining) {
        std::cerr << "Note length exceeds measure" << std::endl;
        throw std::logic_error("Note length exceeds measure");
    }
    beatUnitsRemaining -= (notes.back().getBeatUnits() / 2);
    // This must come after as Note::addDot() modifies the note length
    notes.back().addDot();
}

void Measure::addDoubleDot()
{
    if ((notes.back().getBeatUnits() / 2 + notes.back().getBeatUnits() / 4) > beatUnitsRemaining) {
        std::cerr << "Note length exceeds measure" << std::endl;
        throw std::logic_error("Note length exceeds measure");
    }
    beatUnitsRemaining -= (notes.back().getBeatUnits() / 2 + notes.back().getBeatUnits() / 4);
    // This must come after as Note::addDoubleDot() modifies the note length
    notes.back().addDoubleDot();
}

void Measure::fillWithRests()
{
    int n;
    while (beatUnitsRemaining > 0) {
        n = 1;
        while (n * 2 <= beatUnitsRemaining) {
            n *= 2;
        } 
        beatUnitsRemaining -= n;
        notes.push_back(Rest(n));
    }
}

void Measure::addTiedNote(Note note)
{
    if (note.getBeatUnits() > beatUnitsRemaining) {
        std::cerr << "Note length exceeds measure" << std::endl;
        throw std::logic_error("Note length exceeds measure");
    }
    beatUnitsRemaining -= note.getBeatUnits();
    notes.push_back(note);
}

void Measure::setDynamic(Dynamic dynamic)
{
    if (notes.size() < 1) {
        std::cerr << "No existing note to attach dynamic to" << std::endl;
        throw std::logic_error("No existing note to attach dynamic to");
    }
    notes.back().getAttributes().dynamic = dynamic;
}

void Measure::setBeatUnitsPerSecond(float beatUnitsPerSecond)
{
    if (notes.size() < 1) {
        std::cerr << "No existing note to attach tempo to" << std::endl;
        throw std::logic_error("No existing note to attach dynamic to");
    }
    notes.back().getAttributes().beatUnitsPerSecond = beatUnitsPerSecond;
}
