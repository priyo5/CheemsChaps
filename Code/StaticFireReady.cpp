#include "StaticFireReady.h"
#include <iostream>

using namespace std;

StaticFireReady::StaticFireReady()
{
    this->passedTest = false;
}

void StaticFireReady::handleLaunch(){
    if (this->passedTest)
    {
        cout << "We have blastoff!\n";
    }
}

void StaticFireReady::handleStaticFireTest()
{
    cout << "Static launch passed, ready for lift off\n";
    this->passedTest = true;
}

bool StaticFireReady::getPassedTest()
{
    return this->passedTest;
}