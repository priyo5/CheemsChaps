#include "RocketBuilder.h"

using namespace std;

void RocketBuilder::Launch(){
	this->state->handleLaunch();
}

void RocketBuilder::StaticFire(){
	this->state->handleStaticFireTest();
}

void RocketBuilder::BuildRocket() {
	// TODO - implement RocketBuilder::BuildRocket
	throw "Not yet implemented";
}

void RocketBuilder::BuildRocketType() {
	// TODO - implement RocketBuilder::BuildRocketType
	throw "Not yet implemented";
}

void RocketBuilder::BuildStage() {
	// TODO - implement RocketBuilder::BuildStage
	throw "Not yet implemented";
}

void RocketBuilder::BuildSpacecraft() {
	// TODO - implement RocketBuilder::BuildSpacecraft
	throw "Not yet implemented";
}

void RocketBuilder::BuildCargo() {
	// TODO - implement RocketBuilder::BuildCargo
	throw "Not yet implemented";
}
