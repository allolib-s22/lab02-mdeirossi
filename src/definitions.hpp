#ifndef DEFINITIONS_HPP
#define DEFINITIONS_HPP


constexpr float A4_FREQ = 440.0f;

enum class NoteName
{
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

enum class NoteType
{
    _1024th = 1,
    _512th = 2,
    _256th = 4,
    _128th = 8,
    _64th = 16,
    _32nd = 32,
    _16th = 64,
    _eighth = 128,
    _quarter = 256,
    _half = 512,
    _whole = 1024,
    _breve = 2048,
    _long = 4096,
    _maxima = 8192
};

enum class Accidental
{
    doubleFlat = 0,
    flat = 1,
    natural = 2,
    sharp = 3,
    doubleSharp = 4
};

enum class Dynamic
{
    noChange = 0,
    ppp = 5,
    pp = 10,
    p = 20,
    mp = 40,
    mf = 50,
    f = 60,
    sfz = 70,
    ff = 80,
    fff = 100
};

enum class Instrument
{
    AcousticGrandPiano,
    BrightAcousticPiano,
    ElectricGrandPiano,
    HonkyTonkPiano,
    ElectricPiano1,
    ElectricPiano2,
    Harpsichord,
    Clavinet,
    Celesta,
    Glockenspiel,
    MusicBox,
    Vibraphone,
    Marimba,
    Xylophone,
    TubularBells,
    Dulcimer,
    DrawbarOrgan,
    PercussiveOrgan,
    RockOrgan,
    ChurchOrgan,
    ReedOrgan,
    Accordion,
    Harmonica,
    TangoAccordion,
    AcousticGuitarNylon,
    AcousticGuitarSteel,
    ElectricGuitarJazz,
    ElectricGuitarClean,
    ElectricGuitarMuted,
    ElectricGuitarOverdriven,
    ElectricGuitarDistortion,
    ElectricGuitarHarmonics,
    AcousticBass,
    ElectricBassFinger,
    ElectricBassPicked,
    FretlessBass,
    SlapBass1,
    SlapBass2,
    SynthBass1,
    SynthBass2,
    Violin,
    Viola,
    Cello,
    Contrabass,
    TremoloStrings,
    PizzicatoStrings,
    Harp,
    Timpani,
    StringEnsemble1,
    StringEnsemble2,
    SynthStrings1,
    SynthStrings2,
    ChoirAahs,
    VoiceOohs,
    SynthVoice,
    OrchestraHit,
    Trumpet,
    Trombone,
    Tuba,
    MutedTrumpet,
    FrenchHorn,
    BrassSection,
    SynthBrass1,
    SynthBrass2,
    SopranoSax,
    AltoSax,
    TenorSax,
    BaritoneSax,
    Oboe,
    EnglishHorn,
    Bassoon,
    Clarinet,
    Piccolo,
    Flute,
    Recorder,
    PanFlute,
    BlownBottle,
    Shakuhachi,
    Whistle,
    Ocarina,

    AcousticBassDrum,
    BassDrum1,
    SideStick,
    AcousticSnare,
    HandClap,
    ElectricSnare,
    LowFloorTom,
    ClosedHiHat,
    HighFloorTom,
    PedalHiHat,
    LowTom,
    OpenHiHat,
    LowMidTom,
    HighMidTom,
    CrashCymbal1,
    HighTom,
    RideCymbal1,
    ChineseCymbal,
    RideBell,
    Tambourine,
    SplashCymbal,
    Cowbell,
    CrashCymbal2,
    Vibraslap,
    RideCymbal2,
    HighBongo,
    LowBongo,
    MuteHighConga,
    OpenHighConga,
    LowConga,
    HighTimbale,
    LowTimbale,
    HighAgogo,
    LowAgogo,
    Cabasa,
    Maracas,
    ShortWhistle,
    LongWhistle,
    ShortGuiro,
    LongGuiro,
    Claves,
    HighWoodBlock,
    LowWoodBlock,
    MuteCuica,
    OpenCuica,
    MuteTriangle,
    OpenTriangle
};

template <typename Enumeration>
auto as_int(Enumeration const value) -> typename std::underlying_type<Enumeration>::type
{
    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}

#endif
