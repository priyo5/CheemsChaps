#ifndef VACUUMMERLINENGINEFACTORY_H
#define VACUUMMERLINENGINEFACTORY_H

#include "VacuumMerlinEngine.h"
#include "EngineFactory.h"

/// VacuumMerlinEngineFactory is a Concrete Creator for the Engine Factory Hierarchy
///
///  Overides the factory method to return an instanc of VacuumMerlinEngine

class VacuumMerlinEngineFactory : public EngineFactory
{
    public:
        virtual Engine* makeEngine();
};
#endif