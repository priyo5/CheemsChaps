#ifndef PEOPLEROCKETBUILDER_H
#define PEOPLEROCKETBUILDER_H

#include "RocketBuilder.h"
/// PeopleRocketBuilder is a concrete builder for our builder pattern
///
/// This concrete builder builds a rocket with people
class PeopleRocketBuilder: public RocketBuilder  {
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


#endif //PEOPLEROCKETBUILDER_H
