#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H

#include "VacuumMerlinEngine.h"
#include "EngineFactory.h"

class VacuumMerlinEngine : public EngineFactory
{
    public:
        virtual Engine* makeEngine();
};
#endif