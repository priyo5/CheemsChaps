#ifndef SATELITEROCKETBUILDER_H
#define SATELITEROCKETBUILDER_H


class SateliteRocketBuilder {
    RocketTypes* BuildRocketType();

    Spacecraft* BuildSpacecraftType(string type, int capacity, int numPeople,string sat_type); //crew for num people
};

#endif //SATELITEROCKETBUILDER_H
