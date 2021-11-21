#ifndef ENGINETYPEBUILDER_H
#define ENGINETYPEBUILDER_H

#include "../Engine_Factory/Engine.h"
#include <string>
using namespace std;

class EngineTypeBuilder{
public:
    Engine* BuildEngineType(string);
};

#endif