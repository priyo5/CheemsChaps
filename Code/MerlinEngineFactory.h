#ifndef MERLINENGINEFACTORY_H
#define MERLINENGINEFACTORY_H

#include "MerlinEngine.h"
#include "EngineFactory.h"

class MerlinEngineFactory : public EngineFactory
{
    public:
        virtual Engine* makeEngine();
};
#endif