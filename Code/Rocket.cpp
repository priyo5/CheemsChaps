#include "Rocket.h"
#include "LaunchReady.h""

void Rocket::Launch(){
	state->handleLaunch();
}

void Rocket::StaticFire() {
	state->handleStaticFireTest();
}
