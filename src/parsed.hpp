#ifndef PARSED_HPP
#define PARSED_HPP


void loadFromXML(Score& score) {

// ------------------------------
// Instrument List
// ------------------------------
score.addStaff(Instrument::Trumpet, "Trumpet-P1");

// ------------------------------
// Parts
// ------------------------------
// Trumpet-P1
score.setStaff("Trumpet-P1");
// m1
score.addMeasure(TimeSignature(4, 4));
score.setTempo(NoteType::_quarter, 116.0f, false);
score.setDynamic(Dynamic::f);
score.addNote(NoteName::A4, Accidental::sharp, NoteType::_eighth);
score.addDot();
score.addChord(NoteName::D5, Accidental::natural);
score.addChord(NoteName::F5, Accidental::natural);
score.addNote(NoteName::A4, Accidental::sharp, NoteType::_32nd);
score.addChord(NoteName::D5, Accidental::natural);
score.addChord(NoteName::F5, Accidental::natural);
score.addNote(NoteName::A4, Accidental::sharp, NoteType::_32nd);
score.addChord(NoteName::D5, Accidental::natural);
score.addChord(NoteName::F5, Accidental::natural);
score.addNote(NoteName::A4, Accidental::sharp, NoteType::_quarter);
score.addChord(NoteName::D5, Accidental::natural);
score.addChord(NoteName::F5, Accidental::natural);

}

#endif
