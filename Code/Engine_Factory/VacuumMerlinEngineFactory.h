#ifndef VACUUMMERLINENGINEFACTORY_H
#define VACUUMMERLINENGINEFACTORY_H

#include "VacuumMerlinEngine.h"
#include "EngineFactory.h"

class VacuumMerlinEngineFactory : public EngineFactory
{
    public:
        virtual Engine* makeEngine();
};
#endif