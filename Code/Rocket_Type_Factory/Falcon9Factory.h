#ifndef FALCON9FACTORY_H
#define FALCON9FACTORY_H

#include "Falcon9.h"
#include "RocketTypeFactory.h"
#include "./Engine_Factory/Engine.h"

class Falcon9Factory : public RocketTypeFactory
{
    public:
        virtual RocketTypes* makeRocketType(Engine *s1,Engine *s2);
};
#endif