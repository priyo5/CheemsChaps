#include "LaunchReady.h"
#include "State.h"

using namespace std;

#include <iostream>

void LaunchReady::handleLaunch(){
    if (this->passedTest)
    {
        cout << "We have blastoff!\n";
    }
    
}

void LaunchReady::handleStaticFireTest(){
    cout << "Static launch passed, ready for lift off\n";
	this->passedTest = true;
}