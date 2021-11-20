#include "SpacecraftTypeBuilder.h"
#include "SpacecraftFactory.h"
#include "CrewDragonFactory.h"
#include "DragonSpacecraftFactory.h"
#include <string>

using namespace std;

//Constructor
SpacecraftTypeBuilder::SpacecraftTypeBuilder()
{
    //create approptiate spacecraft
    crewFact = new CrewDragonFactory();
    dragonFact= new DragonSpacecraftFactory();
}

/**CREW**/
Spacecraft* SpacecraftTypeBuilder::BuildSpacecraftType(string type, int weight, int numPeople)
{
    return crewFact->startSpacecraftFactory(weight, numPeople);
}

/**Dragon**/
Spacecraft* SpacecraftTypeBuilder::BuildSpacecraftType(string type, int weight, string sat_type)
{
    DragonSpacecraft* final_spacecraft = dragonFact->startSpacecraftFactory(weight, sat_type);
    final_spacecraft->setCargo(int weight, string sat_type);
    return final_spacecraft;
}
