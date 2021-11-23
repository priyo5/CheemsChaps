#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

#include "RocketTypes.h"

/// FalconHeavy  is a Concrete Proudct for the RocketTypes Hierarchy
///
///  Implements the interface for the RocketTypes product

class FalconHeavy : public RocketTypes 
{
    public:
        FalconHeavy(Engine *,Engine *);
};
#endif
