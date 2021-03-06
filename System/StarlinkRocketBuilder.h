#ifndef STARLINKROCKETBUILDER_H
#define STARLINKROCKETBUILDER_H

#include "RocketBuilder.h"
/// StarlinkRocketBuilder is a concrete builder for our builder pattern
///
/// This concrete builder builds a starlink

class StarlinkRocketBuilder : public  RocketBuilder{
public:
    void BuildRocketType();

    void BuildSpacecraftType(int numPeople,string sat_type); //crew for num people

    //Getters
    RocketTypes* getRocketTypes();
    Spacecraft* getSpacecraft();

private:
    RocketTypes* rockettype;
    Spacecraft* spacecraft;
};

#endif //STARLINKROCKETBUILDER_H
