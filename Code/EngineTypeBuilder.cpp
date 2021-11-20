#include "EngineTypeBuilder.h"

#include <iostream>
using namespace std;

void EngineTypeBuilder::BuildEngineType(string engineType){
    if (engineType == "Merlin")
    {
       //create appropriate engine with factory
    }
    else if (engineType == "VacuumMerlin")
    {
        //create appropriate engine with factory
    }
    else
    {
        cout << "Invalid engine specified!\n";
    }
}