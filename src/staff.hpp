#ifndef STAFF_HPP
#define STAFF_HPP

#include "Measure.hpp"


class Staff
{
public:
	Staff() { }
	Staff(Instrument instrument);

	Instrument getInstrument() { return instrument; }
	std::vector<Measure>& getMeasures() { return measures; }

protected:
	Instrument instrument;
	std::vector<Measure> measures;
};


#endif
