#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H

#include "FalconHeavy.h"
#include "RocketTypeFactory.h"
#include "../Engine_Factory/Engine.h"

class FalconHeavyFactory : public RocketTypeFactory
{
    public:
        virtual RocketTypes* makeRocketType(Engine*,Engine*);
};
#endif