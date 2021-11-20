#ifndef SCBuilder_H
#define SCBuilder_H

#include "RocketBuilder.h"
#include "SpacecraftFactory.h"
#include "Spacecraft.h"

using namespace std;

class SpacecraftTypeBuilder : public RocketBuilder
{
public:
    SpacecraftTypeBuilder();
    Spacecraft* BuildSpacecraftType(String t, int w, int numPeople); //crew
    Spacecraft* BuildSpacecraftType(String t, int w, string sat_type); //dragon

private:
    SpacecraftFactory* crewFact;
    SpacecraftFactory* dragonFact;
};

#endif