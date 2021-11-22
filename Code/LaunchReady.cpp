#include "LaunchReady.h"
#include <iostream>

using namespace std;

LaunchReady::LaunchReady()
{
    this->passedTest = true;
}

void LaunchReady::handleLaunch(){
    if (this->passedTest)
    {
        cout << "We have blastoff!\n";
    }
}

void LaunchReady::handleStaticFireTest()
{
    cout << "Static launch passed, ready for lift off\n";
	this->passedTest = true;
}

bool LaunchReady::getPassedTest()
{
    return this->passedTest;
}