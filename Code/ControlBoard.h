//This represents the Invoker Participant
#ifndef CONTROLBOARD_H
#define CONTROLBOARD_H

#include <string>
#include <iostream>

#include "StaticFire.h"
#include "Launch.h"

using namespace std;

class ControlBoard
{
private:
    //Pointers to the different Concrete Command Objects
    Launch *L;
	StaticFire *S;

public:
    //A Constructor to initialise the ControlBoard with the Concrete Commands
	ControlBoard(Launch *L, StaticFire *S);
	
    //A *Button* used to press the Launch Button
    void PressL();

    //A *Button* used to press the StaticFire Button
	void PressS();
};

#endif