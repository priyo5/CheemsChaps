/**THE COMPONENT**/
/**THE SUBJECT**/

#ifndef CARGO_H
#define CARGO_H
#include "Observer.h"
#include <vector>

using namespace std;

/**
 * Note:   A Dragon Spacecraft can only take cargo.  No hoomans allowed.
 */

class Cargo
{
private:
    int numSatellites;

public:
	Cargo();
    ~Cargo();
	virtual void add(Cargo* cargo) = 0;
	void setNumSat(int);
	int getNumSat();
    virtual void print() = 0;

    //OBSERVER DESIGN PATTERN
    void attach(Observer*);
    void detach(Observer*);
    void notify();

private:
    //OBSERVER DESIGN PATTERN
    vector<Observer*> observerList;
};

#endif
