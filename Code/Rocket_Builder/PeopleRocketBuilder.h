#ifndef PEOPLEROCKETBUILDER_H
#define PEOPLEROCKETBUILDER_H

#include "RocketBuilder.h"


class PeopleRocketBuilder: public RocketBuilder  {
public:

    RocketTypes* BuildRocketType();

    Spacecraft* BuildSpacecraftType(int numPeople,string sat_type); //crew for num people
};


#endif //PEOPLEROCKETBUILDER_H
