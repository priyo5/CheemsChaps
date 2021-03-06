#ifndef SATELITEROCKETBUILDER_H
#define SATELITEROCKETBUILDER_H

#include "RocketBuilder.h"

/// SateliteRocketBuilder is a concrete builder for our builder pattern
///
/// This concrete builder builds a satellite
class SateliteRocketBuilder: public RocketBuilder{
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

#endif //SATELITEROCKETBUILDER_H
