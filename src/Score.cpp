#include "Score.hpp"


Score::Score()
{
    this->amplitude = 0.5f;
    this->beatUnitsPerSecond = 256.0f;
    this->maxNoteSeparation = 0.5f;
    this->currentStaff = nullptr;
}

void Score::addStaff(Instrument instrument, std::string name)
{
    if (std::find(staffNames.begin(), staffNames.end(), name) != staffNames.end()) {
        std::cerr << "Staff with name " << name << " already exists" << std::endl;
        throw std::invalid_argument("Staff with name " + name + " already exists");
    }
    staffNames.push_back(name);
    staves.push_back(Staff(instrument));
    currentStaff = &staves.back();
}

void Score::setStaff(std::string name)
{
    std::vector<std::string>::iterator it = std::find(staffNames.begin(), staffNames.end(), name);
    if (it == staffNames.end()) {
        std::cerr << "No staff with name " << name << std::endl;
        throw std::invalid_argument("No staff with name " + name);
    }
    currentStaff = &staves.at(it - staffNames.begin());
}

void Score::addMeasure(TimeSignature timeSignature)
{
    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() > 0) {
        if (currentStaff->getMeasures().back().getBeatUnitsRemaining() > 0) {
            std::cerr << "Current measure is not filled" << std::endl;
            throw std::logic_error("Current measure is not filled");
        }
    }
    currentStaff->getMeasures().push_back(Measure(timeSignature));
}

void Score::addMeasure()
{

    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() < 1) {
        std::cerr << "Time signature required in first measure" << std::endl;
        throw std::invalid_argument("Time signature required in first measure");
    }
    if (currentStaff->getMeasures().back().getBeatUnitsRemaining() > 0) {
        std::cerr << "Current measure is not filled" << std::endl;
        throw std::logic_error("Current measure is not filled");
    }
    currentStaff->getMeasures().push_back(Measure(currentStaff->getMeasures().back().getTimeSignature()));
}

void Score::addNote(NoteName name, Accidental accidental, NoteType type)
{
    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() < 1) {
        std::cerr << "No measure in staff" << std::endl;
        throw std::invalid_argument("No measure in staff");
    }
    currentStaff->getMeasures().back().addNote(Note(name, accidental, type));
}

void Score::addChord(NoteName name, Accidental accidental)
{
    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() < 1) {
        std::cerr << "No measure in staff" << std::endl;
        throw std::invalid_argument("No measure in staff");
    }
    currentStaff->getMeasures().back().addChord(name, accidental);
}

void Score::addRest(NoteType type)
{
    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() < 1) {
        std::cerr << "No measure in staff" << std::endl;
        throw std::invalid_argument("No measure in staff");
    }
    currentStaff->getMeasures().back().addRest(Rest(type));
}

void Score::addDot()
{
    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() < 1) {
        std::cerr << "No measure in staff" << std::endl;
        throw std::invalid_argument("No measure in staff");
    }
    currentStaff->getMeasures().back().addDot();
}

void Score::addDoubleDot()
{
    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() < 1) {
        std::cerr << "No measure in staff" << std::endl;
        throw std::invalid_argument("No measure in staff");
    }
    currentStaff->getMeasures().back().addDoubleDot();
}

void Score::fillWithRests()
{
    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() < 1) {
        std::cerr << "No measure in staff" << std::endl;
        throw std::invalid_argument("No measure in staff");
    }
    currentStaff->getMeasures().back().fillWithRests();
}

void Score::addTuplet(int numNotes, NoteType type, bool dotted)
{

}

void Score::addTiedNote(NoteName name, Accidental accidental, NoteType type)
{
    if (staffNames.size() < 1) {
        std::cerr << "No staves exist" << std::endl;
        throw std::invalid_argument("No staves exist");
    }
    if (currentStaff->getMeasures().size() < 1) {
        std::cerr << "No measure in staff" << std::endl;
        throw std::invalid_argument("No measure in staff");
    }
    Note* prevNote;
    std::vector<Measure>& measures = currentStaff->getMeasures();
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

void Score::addTiedChord(NoteName name, Accidental accidental)
{

}

void Score::setDynamic(Dynamic dynamic)
{
    if (staffNames.size() < 1 || currentStaff->getMeasures().size() < 1) {
        this->amplitude = as_int(dynamic) / 100.0f;
    }
    else {
        currentStaff->getMeasures().back().setDynamic(dynamic);
    }
}

void Score::setTempo(NoteType type, float BPM, bool dotted = false)
{
    float typeValue = (dotted) ? (as_int(type) / 2.0f + as_int(type)) : as_int(type);
    float bps = (BPM / 60.0f) * (typeValue / 256.0f) * 256.0f;
    if (currentStaff->getMeasures().size() < 1 || currentStaff->getMeasures().back().getNotes().size() < 1) {
        this->beatUnitsPerSecond = bps;
    }
    else {
        currentStaff->getMeasures().back().setBeatUnitsPerSecond(bps);
    }
}

void Score::setMaxNoteSeparation(float maxNoteSeparation)
{
    this->maxNoteSeparation = maxNoteSeparation;
}

void Score::loadScore()
{
    SynthVoice* voice;
    Staff staff;
    Measure measure;
    Note note;
    float duration;
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
                            voice = sequencer->synth().getVoice<Celesta>();
                            break;
                        case Instrument::Trumpet:
                            voice = sequencer->synth().getVoice<Trumpet>();
                            break;
                        case Instrument::MutedTrumpet:
                            voice = sequencer->synth().getVoice<MutedTrumpet>();
                            break;
                        default:
                            std::cerr << "Could not find voice for instrument" << std::endl;
                            throw std::logic_error("Could not find voice for instrument");
                        }
                        voice->setInternalParameterValue("freq", note.getFreqs().at(k));
                        voice->setInternalParameterValue("amp", amplitude);
                            
                        if (note.isPedalOn()) {
                            duration = voice->getInternalParameterValue("pedalDuration");
                        }
                        else {
                            duration = note.getBeatUnits() / beatUnitsPerSecond;
                        }
                            
                        sequencer->addVoice(
                            voice,
                            currentTime,
                            duration
                        );
                    }
                }

                currentTime += note.getBeatUnits() / beatUnitsPerSecond;
            }

        }
    }
}

void Score::playScore()
{
    loadScore();
    sequencer->playSequence();
}
