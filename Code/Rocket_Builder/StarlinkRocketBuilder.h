#ifndef STARLINKROCKETBUILDER_H
#define STARLINKROCKETBUILDER_H

#include "RocketBuilder.h"


class StarlinkRocketBuilder : public  RocketBuilder{
public:
    RocketTypes* BuildRocketType();

    Spacecraft* BuildSpacecraftType(int numPeople,string sat_type); //crew for num people
};

#endif //STARLINKROCKETBUILDER_H
