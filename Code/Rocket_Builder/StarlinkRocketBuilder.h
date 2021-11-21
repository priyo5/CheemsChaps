#ifndef STARLINKROCKETBUILDER_H
#define STARLINKROCKETBUILDER_H


class StarlinkRocketBuilder {
    RocketTypes* BuildRocketType();

    Spacecraft* BuildSpacecraftType(string type, int capacity, int numPeople,string sat_type); //crew for num people
};

#endif //STARLINKROCKETBUILDER_H
