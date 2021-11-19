#include "RocketBuilder.h"

using namespace std;

void RocketBuilder::Launch(){
	this->state->handleLaunch();
}

void RocketBuilder::StaticFire(){
	this->state->handleStaticFireTest();
}
