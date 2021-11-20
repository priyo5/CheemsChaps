#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <string>

using namespace std;

class Spacecraft {
public:
	Spacecraft();
	void setWeight(int);
protected:
	int weight; // The weight of the payload in tonnes
};

#endif
