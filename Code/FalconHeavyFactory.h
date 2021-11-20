#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H

#include "FalconHeavy.h"
#include "RocketTypeFactory.h"
#include "MerlinEngine.h"
#include "VacuumMerlinEngine.h"

class FalconHeavyFactory : public RocketTypeFactory
{
    public:
        virtual RocketTypes* makeRocketType(MerlinEngine *s1,VacuumMerlinEngine *s2);
};
#endif