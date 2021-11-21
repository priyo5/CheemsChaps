#ifndef SCBuilder_H
#define SCBuilder_H

#include "RocketBuilder.h"
// #include "../Spacecraft_Factory/SpacecraftFactory.h" // Don't think we need this, might be causing a loop
#include "../Spacecraft_Factory/CrewDragonFactory.h"
#include "../Spacecraft_Factory/DragonSpacecraftFactory.h"
#include "../Spacecraft_Factory/Spacecraft.h"
#include <string>

using namespace std;

class SpacecraftTypeBuilder : public RocketBuilder
{
public:
    SpacecraftTypeBuilder();
    virtual Spacecraft* BuildSpacecraftType(string t, int w, int numPeople); //crew
    virtual Spacecraft* BuildSpacecraftType(string t, int w, string sat_type); //dragon

private:
    SpacecraftFactory* crewFact;
    SpacecraftFactory* dragonFact;
};

#endif