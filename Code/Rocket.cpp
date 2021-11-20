#include "Rocket.h"
#include "SpacecraftTypeBuilder.h"
#include "EngineTypeBuilder.h"
#include "RocketTypeBuilder.h"
#include "LaunchReady.h"

Rocket::Rocket()
{
    this->spacecraftTypeBuilder = new SpacecraftTypeBuilder();
    this->engineTypeBuilder = new EngineTypeBuilder();
    this->rocketTypeBuilder = new RocketTypeBuilder();
}

void Rocket::Launch(){
	state->handleLaunch();
}

void Rocket::StaticFire() {
	state->handleStaticFireTest();
}

//Building the parts of the rocket -
/**CREW**/
void Rocket::BuildSpaceCraft(string type, int weight, int numPeople)
{
    //Deffering the building of the space craft the the concrete builder through the spacecraft factory
    this->spacecraft = this->spacecraftTypeBuilder->BuildSpacecraftType(type, weight, numPeople);
}

//Building the parts of the rocket
/**DRAGON**/
void Rocket::BuildSpaceCraft(string type, int weight, string sat_type)
{
    //Deffering the building of the space craft the the concrete builder through the spacecraft factory
    this->spacecraft = this->spacecraftTypeBuilder->BuildSpacecraftType(type, weight, sat_type);
}
