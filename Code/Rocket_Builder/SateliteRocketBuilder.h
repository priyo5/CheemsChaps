#ifndef SATELITEROCKETBUILDER_H
#define SATELITEROCKETBUILDER_H

#include "RocketBuilder.h"


class SateliteRocketBuilder: public RocketBuilder{
public:
    RocketTypes* BuildRocketType();

    Spacecraft* BuildSpacecraftType(int numPeople,string sat_type); //crew for num people
};

#endif //SATELITEROCKETBUILDER_H
