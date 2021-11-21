#ifndef RTBuilder_H
#define RTBuilder_H

#include "RocketBuilder.h"
#include "../Rocket_Type_Factory/RocketTypes.h"
#include <string>

class RocketTypeBuilder
{
public:
    RocketTypes* BuildRocketType(string Type);
};

#endif