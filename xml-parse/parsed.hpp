// ------------------------------
// Instrument List
// ------------------------------
score.addStaff(Instrument::Flute, "Flute-P1");
score.addStaff(Instrument::Flute, "Flute-P2");
score.addStaff(Instrument::Oboe, "Oboe-P3");
score.addStaff(Instrument::Oboe, "Oboe-P4");
score.addStaff(Instrument::Clarinet, "Clarinet-P5");
score.addStaff(Instrument::Clarinet, "Clarinet-P6");
score.addStaff(Instrument::Bassoon, "Bassoon-P7");
score.addStaff(Instrument::Bassoon, "Bassoon-P8");
score.addStaff(Instrument::FrenchHorn, "FrenchHorn-P9");
score.addStaff(Instrument::FrenchHorn, "FrenchHorn-P10");
score.addStaff(Instrument::FrenchHorn, "FrenchHorn-P11");
score.addStaff(Instrument::FrenchHorn, "FrenchHorn-P12");
score.addStaff(Instrument::Trumpet, "Trumpet-P13");
score.addStaff(Instrument::Trumpet, "Trumpet-P14");
score.addStaff(Instrument::Trumpet, "Trumpet-P15");
score.addStaff(Instrument::Trombone, "Trombone-P16");
score.addStaff(Instrument::Trombone, "Trombone-P17");
score.addStaff(Instrument::Trombone, "Trombone-P18");
score.addStaff(Instrument::Tuba, "Tuba-P19");
score.addStaff(Instrument::Timpani, "Timpani-P20");
score.addStaff(Instrument::CrashCymbal1, "CrashCymbal1-P21");
score.addStaff(Instrument::CrashCymbal1, "CrashCymbal1-P22");
score.addStaff(Instrument::CrashCymbal1, "CrashCymbal1-P23");
score.addStaff(Instrument::Harp, "Harp-P24");
score.addStaff(Instrument::Celesta, "Celesta-P25");
score.addStaff(Instrument::StringEnsemble1, "StringEnsemble1-P26");
score.addStaff(Instrument::StringEnsemble1, "StringEnsemble1-P27");
score.addStaff(Instrument::StringEnsemble1, "StringEnsemble1-P28");
score.addStaff(Instrument::StringEnsemble1, "StringEnsemble1-P29");
score.addStaff(Instrument::StringEnsemble1, "StringEnsemble1-P30");

// ------------------------------
// Parts
// ------------------------------
// Flute-P1
// m0
score.addMeasure(TimeSignature(3, 8));
score.setTempo(NoteType::_quarter, 58.0f, true);
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_16th);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_eighth);
// m2
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_64th);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_16th);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_eighth);
score.addRest(NoteType::_eighth);
score.addRest(NoteType::_64th);
// m3
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addDot();
// m4
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addDot();
// m5
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
score.addRest(NoteType::_eighth);
score.addRest(NoteType::_eighth);
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Flute-P2
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Oboe-P3
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Oboe-P4
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Clarinet-P5
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Clarinet-P6
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Bassoon-P7
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Bassoon-P8
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// FrenchHorn-P9
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// FrenchHorn-P10
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// FrenchHorn-P11
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// FrenchHorn-P12
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Trumpet-P13
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Trumpet-P14
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Trumpet-P15
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Trombone-P16
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Trombone-P17
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Trombone-P18
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Tuba-P19
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Timpani-P20
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// CrashCymbal1-P21
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// CrashCymbal1-P22
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// CrashCymbal1-P23
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// Harp-P24
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();
score.fillWithRests();

// Celesta-P25
// m0
score.addMeasure(TimeSignature(3, 8));
score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
score.addDot();
score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
// m2
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
// m3
score.addMeasure();
score.addNote(NoteName::A5, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
// m4
score.addMeasure();
score.addNote(NoteName::F5, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
// m5
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
score.addDot();
score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
// m6
score.addMeasure();
score.addNote(NoteName::D5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
// m7
score.addMeasure();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m8
score.addMeasure();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
// m9
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
score.addDot();
score.addNote(NoteName::G5, Accidental::natural, NoteType::_16th);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
// m10
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
// m11
score.addMeasure();
score.addNote(NoteName::D6, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::D4, Accidental::natural, NoteType::_quarter);
score.addChord(NoteName::G4);
score.addChord(NoteName::B4);
score.addChord(NoteName::D5);
score.addChord(NoteName::G5);
// m12
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
score.addChord(NoteName::F4);
score.addChord(NoteName::A4);
score.addChord(NoteName::C5);
score.addChord(NoteName::F5);
// m13
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_eighth);
score.addDot();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_16th);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
score.addChord(NoteName::E4);
score.addChord(NoteName::A4);
score.addChord(NoteName::C5);
score.addChord(NoteName::E5);
// m14
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
score.addChord(NoteName::E4);
score.addChord(NoteName::F4);
// m15
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m16
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
// m17
score.addMeasure();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m18
score.addMeasure();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
// m19
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m20
score.addMeasure();
score.addNote(NoteName::A5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
// m21
score.addMeasure();
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addDot();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_16th);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m22
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m23
score.addMeasure();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m24
score.addMeasure();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
// m25
score.addMeasure();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m26
score.addMeasure();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m27
score.addMeasure();
score.addNote(NoteName::D6, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::D4, Accidental::natural, NoteType::_quarter);
score.addChord(NoteName::G4);
score.addChord(NoteName::B4);
score.addChord(NoteName::D5);
score.addChord(NoteName::G5);
// m28
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
score.addChord(NoteName::F4);
score.addChord(NoteName::A4);
score.addChord(NoteName::C5);
score.addChord(NoteName::F5);
// m29
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_eighth);
score.addDot();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_16th);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_quarter);
score.addChord(NoteName::E4);
score.addChord(NoteName::G4);
score.addChord(NoteName::B4);
score.addChord(NoteName::E5);
// m30
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_quarter);
score.addChord(NoteName::E4);
score.addChord(NoteName::F4);
// m31
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m32
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
// m33
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
// m34
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_quarter);
score.addDot();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_quarter);
score.addNote(NoteName::B3, Accidental::natural, NoteType::_eighth);
// m35
score.addMeasure();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m36
score.addMeasure();
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m37
score.addMeasure();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m38
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A3, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m39
score.addMeasure();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m40
score.addMeasure();
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m41
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m42
score.addMeasure();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m43
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m44
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m45
score.addMeasure();
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m46
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m47
score.addMeasure();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m48
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m49
score.addMeasure();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m50
score.addMeasure();
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m51
score.addMeasure();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m52
score.addMeasure();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m53
score.addMeasure();
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m54
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m55
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m56
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m57
score.addMeasure();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m58
score.addMeasure();
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m59
score.addMeasure();
score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m60
score.addMeasure();
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E6, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m61
score.addMeasure();
score.addNote(NoteName::G6, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E6, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m62
score.addMeasure();
score.addNote(NoteName::C6, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m63
score.addMeasure();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m64
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m65
score.addMeasure();
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m66
score.addMeasure();
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m67
score.addMeasure();
score.addNote(NoteName::G4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m68
score.addMeasure();
score.addNote(NoteName::B4, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m69
score.addMeasure();
score.addNote(NoteName::B5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m70
score.addMeasure();
score.addNote(NoteName::A5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_eighth);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_eighth);
score.fillWithRests();
// m71
score.addMeasure();
score.addNote(NoteName::A4, Accidental::natural, NoteType::_eighth);
score.addChord(NoteName::C5);
score.addChord(NoteName::E5);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_eighth);
score.addChord(NoteName::A4);
score.addChord(NoteName::C5);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_eighth);
score.addChord(NoteName::C5);
score.addChord(NoteName::F5);
score.fillWithRests();
// m72
score.addMeasure();
score.addNote(NoteName::E4, Accidental::natural, NoteType::_eighth);
score.addChord(NoteName::F4);
score.addChord(NoteName::A4);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F4, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m73
score.addMeasure();
score.addNote(NoteName::G4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B4, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::E5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::F5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::G5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::A5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::B5, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::C6, Accidental::natural, NoteType::_32nd);
score.addNote(NoteName::D6, Accidental::natural, NoteType::_32nd);
score.fillWithRests();
// m74
score.addMeasure();
score.addNote(NoteName::E6, Accidental::natural, NoteType::_eighth);
score.addRest(NoteType::_eighth);
score.addRest(NoteType::_eighth);
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();
score.fillWithRests();

// StringEnsemble1-P26
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// StringEnsemble1-P27
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// StringEnsemble1-P28
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// StringEnsemble1-P29
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

// StringEnsemble1-P30
// m0
score.addMeasure(TimeSignature(3, 8));
score.addRest(NoteType::_eighth);
// m1
score.addMeasure();
score.fillWithRests();
// m2
score.addMeasure();
score.fillWithRests();
// m3
score.addMeasure();
score.fillWithRests();
// m4
score.addMeasure();
score.fillWithRests();
// m5
score.addMeasure();
score.fillWithRests();
// m6
score.addMeasure();
score.fillWithRests();
// m7
score.addMeasure();
score.fillWithRests();
// m8
score.addMeasure();
score.fillWithRests();
// m9
score.addMeasure();
score.fillWithRests();
// m10
score.addMeasure();
score.fillWithRests();
// m11
score.addMeasure();
score.fillWithRests();
// m12
score.addMeasure();
score.fillWithRests();
// m13
score.addMeasure();
score.fillWithRests();
// m14
score.addMeasure();
score.fillWithRests();
// m15
score.addMeasure();
score.fillWithRests();
// m16
score.addMeasure();
score.fillWithRests();
// m17
score.addMeasure();
score.fillWithRests();
// m18
score.addMeasure();
score.fillWithRests();
// m19
score.addMeasure();
score.fillWithRests();
// m20
score.addMeasure();
score.fillWithRests();
// m21
score.addMeasure();
score.fillWithRests();
// m22
score.addMeasure();
score.fillWithRests();
// m23
score.addMeasure();
score.fillWithRests();
// m24
score.addMeasure();
score.fillWithRests();
// m25
score.addMeasure();
score.fillWithRests();
// m26
score.addMeasure();
score.fillWithRests();
// m27
score.addMeasure();
score.fillWithRests();
// m28
score.addMeasure();
score.fillWithRests();
// m29
score.addMeasure();
score.fillWithRests();
// m30
score.addMeasure();
score.fillWithRests();
// m31
score.addMeasure();
score.fillWithRests();
// m32
score.addMeasure();
score.fillWithRests();
// m33
score.addMeasure();
score.fillWithRests();
// m34
score.addMeasure();
score.fillWithRests();
// m35
score.addMeasure();
score.fillWithRests();
// m36
score.addMeasure();
score.fillWithRests();
// m37
score.addMeasure();
score.fillWithRests();
// m38
score.addMeasure();
score.fillWithRests();
// m39
score.addMeasure();
score.fillWithRests();
// m40
score.addMeasure();
score.fillWithRests();
// m41
score.addMeasure();
score.fillWithRests();
// m42
score.addMeasure();
score.fillWithRests();
// m43
score.addMeasure();
score.fillWithRests();
// m44
score.addMeasure();
score.fillWithRests();
// m45
score.addMeasure();
score.fillWithRests();
// m46
score.addMeasure();
score.fillWithRests();
// m47
score.addMeasure();
score.fillWithRests();
// m48
score.addMeasure();
score.fillWithRests();
// m49
score.addMeasure();
score.fillWithRests();
// m50
score.addMeasure();
score.fillWithRests();
// m51
score.addMeasure();
score.fillWithRests();
// m52
score.addMeasure();
score.fillWithRests();
// m53
score.addMeasure();
score.fillWithRests();
// m54
score.addMeasure();
score.fillWithRests();
// m55
score.addMeasure();
score.fillWithRests();
// m56
score.addMeasure();
score.fillWithRests();
// m57
score.addMeasure();
score.fillWithRests();
// m58
score.addMeasure();
score.fillWithRests();
// m59
score.addMeasure();
score.fillWithRests();
// m60
score.addMeasure();
score.fillWithRests();
// m61
score.addMeasure();
score.fillWithRests();
// m62
score.addMeasure();
score.fillWithRests();
// m63
score.addMeasure();
score.fillWithRests();
// m64
score.addMeasure();
score.fillWithRests();
// m65
score.addMeasure();
score.fillWithRests();
// m66
score.addMeasure();
score.fillWithRests();
// m67
score.addMeasure();
score.fillWithRests();
// m68
score.addMeasure();
score.fillWithRests();
// m69
score.addMeasure();
score.fillWithRests();
// m70
score.addMeasure();
score.fillWithRests();
// m71
score.addMeasure();
score.fillWithRests();
// m72
score.addMeasure();
score.fillWithRests();
// m73
score.addMeasure();
score.fillWithRests();
// m74
score.addMeasure();
score.fillWithRests();
// m75
score.addMeasure();
score.fillWithRests();
// m76
score.addMeasure();
score.fillWithRests();
// m77
score.addMeasure();
score.fillWithRests();
// m78
score.addMeasure();
score.fillWithRests();
// m79
score.addMeasure();
score.fillWithRests();
// m80
score.addMeasure();
score.fillWithRests();
// m81
score.addMeasure();
score.fillWithRests();
// m82
score.addMeasure();
score.fillWithRests();
// m83
score.addMeasure();
score.fillWithRests();
// m84
score.addMeasure();
score.fillWithRests();
// m85
score.addMeasure();
score.fillWithRests();
// m86
score.addMeasure();
score.fillWithRests();

