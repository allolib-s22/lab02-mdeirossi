import sys
import xml.etree.ElementTree as ET


def parse_xml(argv):
    if len(argv) != 1:
        print('Usage: parse-musicxml.py <inputfile>')
        sys.exit()

    inputfile = argv[0]
    if len(inputfile) < 10:
        print('Input file name too short to be .musicxml')
        sys.exit()
    if inputfile[-9:] != '.musicxml':
        print('Input file must be .musicxml')
        sys.exit()

    print(f'Input file is {inputfile}')


    tree = ET.parse(inputfile)
    root = tree.getroot()
    id_table = {}
 
    result = """\
// ------------------------------
// Instrument List
// ------------------------------\n"""

    for part in root.find('part-list'):

        if part.tag == 'score-part':
            part_id = part.get('id')

            _instr = part.find('midi-instrument')
            if _instr != None:
                name = ""
                if _instr.find('midi-channel').text == "10":
                    name = get_percussion(int(_instr.find('midi-program').text))
                else:
                    name = get_instrument(int(_instr.find('midi-program').text))

                result += f"score.addStaff(Instrument::{name}, \"{name}-{part_id}\");\n"
                id_table[part_id] = name

    result += """\n\
// ------------------------------
// Parts
// ------------------------------\n"""

    for part in root.findall('part'):
        result += f"// {id_table[part.get('id')]}-{part.get('id')}\n"
        result += f"score.setStaff({id_table[part.get('id')]}-{part.get('id')});\n"

        for measure in part.findall('measure'):
            result += f"// m{measure.get('number')}\n"

            _att = measure.find('attributes')
            if _att != None and _att.find('time') != None:
                time_top = _att.find('time').find('beats').text
                time_bot = _att.find('time').find('beat-type').text
                result += f"score.addMeasure(TimeSignature({time_top}, {time_bot}));\n"
            else:
                result += f"score.addMeasure();\n"
            
            _dir = measure.find('direction')
            if _dir != None:
                directions = _dir.findall('direction-type')
                for direction in directions:
                    if direction.find('metronome') != None:
                        beat_type = direction.find('metronome').find('beat-unit').text
                        has_dot = str(direction.find('metronome').find('beat-unit-dot') != None).lower()
                        bpm = direction.find('metronome').find('per-minute').text
                        result += f"score.setTempo(NoteType::_{beat_type}, {float(bpm)}f, {has_dot});\n"

            chord_notes = 0
            for note in measure.findall('note'):
                accidental = "natural"

                if note.find('rest') != None:
                    if note.find('rest').get('measure') == "yes":
                        result += "score.fillWithRests();\n"
                    else:
                        result += f"score.addRest(NoteType::_{note.find('type').text});\n"

                else:
                    _pitch = note.find('pitch')
                    step = _pitch.find('step').text
                    octave = _pitch.find('octave').text
                    note_type = note.find('type').text

                    if _pitch.find('accidental') != None:
                        accidental = _pitch.find('accidental').text
                        
                    if note.find('chord') != None and chord_notes > 0:
                        result += f"score.addChord(NoteName::{step}{octave});\n"
                    else:
                        result += f"score.addNote(NoteName::{step}{octave}, Accidental::{accidental}, NoteType::_{note_type});\n"
                        chord_notes += 1

                if chord_notes <= 1:
                    dots = note.findall('dot')
                    if len(dots) == 2:
                        result += "score.addDoubleDot();\n"
                    elif len(dots) == 1:
                        result += "score.addDot();\n"
                    

        result += "\n"

    file = open("parsed.hpp", "w")
    file.write(result)
    file.close()
    print("Output file is parsed.hpp")


def get_instrument(midi_number):
    switcher = {
        1: "AcousticGrandPiano",
        2: "BrightAcousticPiano",
        3: "ElectricGrandPiano",
        4: "HonkyTonkPiano",
        5: "ElectricPiano1",
        6: "ElectricPiano2",
        7: "Harpsichord",
        8: "Clavinet",
        9: "Celesta",
        10: "Glockenspiel",
        11: "MusicBox",
        12: "Vibraphone",
        13: "Marimba",
        14: "Xylophone",
        15: "TubularBells",
        16: "Dulcimer",
        17: "DrawbarOrgan",
        18: "PercussiveOrgan",
        19: "RockOrgan",
        20: "ChurchOrgan",
        21: "ReedOrgan",
        22: "Accordion",
        23: "Harmonica",
        24: "TangoAccordion",
        25: "AcousticGuitarNylon",
        26: "AcousticGuitarSteel",
        27: "ElectricGuitarJazz",
        28: "ElectricGuitarClean",
        29: "ElectricGuitarMuted",
        30: "ElectricGuitarOverdriven",
        31: "ElectricGuitarDistortion",
        32: "ElectricGuitarHarmonics",
        33: "AcousticBass",
        34: "ElectricBassFinger",
        35: "ElectricBassPicked",
        36: "FretlessBass",
        37: "SlapBass1",
        38: "SlapBass2",
        39: "SynthBass1",
        40: "SynthBass2",
        41: "Violin",
        42: "Viola",
        43: "Cello",
        44: "Contrabass",
        45: "TremoloStrings",
        46: "PizzicatoStrings",
        47: "Harp",
        48: "Timpani",
        49: "StringEnsemble1",
        50: "StringEnsemble2",
        51: "SynthStrings1",
        52: "SynthStrings2",
        53: "ChoirAahs",
        54: "VoiceOohs",
        55: "SynthVoice",
        56: "OrchestraHit",
        57: "Trumpet",
        58: "Trombone",
        59: "Tuba",
        60: "MutedTrumpet",
        61: "FrenchHorn",
        62: "BrassSection",
        63: "SynthBrass1",
        64: "SynthBrass2",
        65: "SopranoSax",
        66: "AltoSax",
        67: "TenorSax",
        68: "BaritoneSax",
        69: "Oboe",
        70: "EnglishHorn",
        71: "Bassoon",
        72: "Clarinet",
        73: "Piccolo",
        74: "Flute",
        75: "Recorder",
        76: "PanFlute",
        77: "BlownBottle",
        78: "Shakuhachi",
        79: "Whistle",
        80: "Ocarina"
    }
    return switcher.get(midi_number, "Invalid Midi Number")

def get_percussion(midi_number):
    switcher = {
        35: "AcousticBassDrum",
        36: "BassDrum1",
        37: "SideStick",
        38: "AcousticSnare",
        39: "HandClap",
        40: "ElectricSnare",
        41: "LowFloorTom",
        42: "ClosedHiHat",
        43: "HighFloorTom",
        44: "PedalHiHat",
        45: "LowTom",
        46: "OpenHiHat",
        47: "LowMidTom",
        48: "HighMidTom",
        49: "CrashCymbal1",
        50: "HighTom",
        51: "RideCymbal1",
        52: "ChineseCymbal",
        53: "RideBell",
        54: "Tambourine",
        55: "SplashCymbal",
        56: "Cowbell",
        57: "CrashCymbal2",
        58: "Vibraslap",
        59: "RideCymbal2",
        60: "HighBongo",
        61: "LowBongo",
        62: "MuteHighConga",
        63: "OpenHighConga",
        64: "LowConga",
        65: "HighTimbale",
        66: "LowTimbale",
        67: "HighAgogo",
        68: "LowAgogo",
        69: "Cabasa",
        70: "Maracas",
        71: "ShortWhistle",
        72: "LongWhistle",
        73: "ShortGuiro",
        74: "LongGuiro",
        75: "Claves",
        76: "HighWoodBlock",
        77: "LowWoodBlock",
        78: "MuteCuica",
        79: "OpenCuica",
        80: "MuteTriangle",
        81: "OpenTriangle"
    }
    return switcher.get(midi_number, "Invalid Midi Number")

if __name__ == "__main__":
	parse_xml(sys.argv[1:]);
