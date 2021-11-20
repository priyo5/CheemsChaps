#ifndef SCBuilder_H
#define SCBuilder_H

#include "RocketBuilder.h"
#include "SpacecraftFactory.h"
#include "Spacecraft.h"
#include <string>

using namespace std;

class SpacecraftTypeBuilder : public RocketBuilder
{
public:
    SpacecraftTypeBuilder();
    Spacecraft* BuildSpacecraftType(string t, int w, int numPeople); //crew
    Spacecraft* BuildSpacecraftType(string t, int w, string sat_type); //dragon

private:
    SpacecraftFactory* crewFact;
    SpacecraftFactory* dragonFact;
};

#endif