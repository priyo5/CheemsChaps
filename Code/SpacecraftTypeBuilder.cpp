#include "SpacecraftTypeBuilder.h"
#include "SpacecraftFactory.h"
#include "CrewDragonFactory.h"
#include "DragonSpacecraftFactory.h"

using namespace std;

//Constructor
SpacecraftTypeBuilder::SpacecraftTypeBuilder()
{
    //create approptiate spacecraft
    crewFact = new CrewDragonFactory();
    dragonFact= new DragonSpacecraftFactory();
}

/**CREW**/
Spacecraft* SpacecraftTypeBuilder::BuildSpacecraftType(String type, int weight, int numPeople)
{
    return crewFact->startSpacecraftFactory(weight, numPeople);
}

/**Dragon**/
Spacecraft* SpacecraftTypeBuilder::BuildSpacecraftType(String type, int weight, string sat_type)
{
    Spacecraft* final_spacecraft = dragonFact->startSpacecraftFactory(weight, sat_type);
    return final_spacecraft;
}
