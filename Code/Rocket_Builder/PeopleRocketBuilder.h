#ifndef PEOPLEROCKETBUILDER_H
#define PEOPLEROCKETBUILDER_H

#include "RocketBuilder.h"


class PeopleRocketBuilder: public RocketBuilder  {
    RocketTypes* BuildRocketType();

    Spacecraft* BuildSpacecraftType(string type, int capacity, int numPeople,string sat_type); //crew for num people
};


#endif //PEOPLEROCKETBUILDER_H
