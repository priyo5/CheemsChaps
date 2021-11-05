#ifndef CARGO_H
#define CARGO_H

class Cargo : RocketBuilder {

public:
	int numSatellites;

	Cargo();

	void add(Cargo* cargo);

	void setNumSat();

	int getNumSat();

	void operation();
};

#endif
