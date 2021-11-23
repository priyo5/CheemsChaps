#ifndef FALCON9FACTORY_H
#define FALCON9FACTORY_H

#include "Falcon9.h"
#include "RocketTypeFactory.h"
#include "Engine.h"

/// Falcon9Factory is a Concrete Creator for the RocketTypes Factory Hierarchy
///
///  Overides the factory method to return an instanc of Falcon9

class Falcon9Factory : public RocketTypeFactory
{
    public:
        virtual RocketTypes* makeRocketType(Engine *s1,Engine *s2);
};
#endif