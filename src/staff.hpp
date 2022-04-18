#ifndef STAFF_HPP
#define STAFF_HP

#include "al/scene/al_PolySynth.hpp"
#include "measure.hpp"


class Staff
{
public:
	Staff() { }
	Staff(al::SynthVoice* instrument);

	al::SynthVoice* getInstrument() { return instrument; }
	std::vector<Measure>& getMeasures() { return measures; }

protected:
	al::SynthVoice* instrument;
	std::vector<Measure> measures;
};


#endif
