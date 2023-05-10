# MusicXML demo

* By Max Dei Rossi
* Updated/maintained by Phill Conrad
* Framework: [allotemplate](https://github.com/AlloSphere-Research-Group/allotemplate/tree/master)

# To use:

To hear initial demo (Star Wars theme)

1. Clone repo
2. Run `./init.sh`
3. Run `./run.sh`
4. Press space bar then wait a few seconds; there is a delay before the music starts (this would be a drum riff, but it's not yet implemented)

# To hear a different piece

From the src directory, run python3 parse-musicxml.py [filename.musicxml] with a musicxml file.


# Known Issues

* Tie to a dotted note will ignore the dot
* Tempo markings do not affect all staves
* Does not support pickup measures