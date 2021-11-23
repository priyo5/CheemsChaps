#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H

#include "FalconHeavy.h"
#include "RocketTypeFactory.h"
#include "Engine.h"

/// FalconHeavyFactory is a Concrete Creator for the RocketTypes Factory Hierarchy
///
///  Overides the factory method to return an instanc of FalconHeavy

class FalconHeavyFactory : public RocketTypeFactory
{
    public:
        virtual RocketTypes* makeRocketType(Engine*,Engine*);
};
#endif