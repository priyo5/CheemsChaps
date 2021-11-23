#ifndef MERLINENGINEFACTORY_H
#define MERLINENGINEFACTORY_H

#include "MerlinEngine.h"
#include "EngineFactory.h"

/// MerlinEngineFactory is a Concrete Creator for the Engine Factory Hierarchy
///
///  Overides the factory method to return an instanc of MerlineEngine

class MerlinEngineFactory : public EngineFactory
{
    public:
        virtual Engine* makeEngine();
};
#endif