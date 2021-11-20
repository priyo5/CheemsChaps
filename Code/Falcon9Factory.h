#ifndef FALCON9FACTORY_H
#define FALCON9FACTORY_H

#include "Falcon9.h"
#include "RocketTypeFactory.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"

class Falcon9Factory : public RocketTypeFactory
{
    public:
        virtual RocketTypes* makeRocketType(MerlinEngine *s1,VacuumMerlinEngine *s2);
};
#endif