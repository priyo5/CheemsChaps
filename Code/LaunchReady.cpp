#include "LaunchReady.h"
#include "State.h"

#include <iostream>

using namespace std;

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