#ifndef EBuilder_H
#define EBuilder_H
#include "Engine.h"
#include <string>
using namespace std;

class EngineTypeBuilder{
public:
    Engine* BuildEngineType(string);
};

#endif