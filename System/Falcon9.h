#ifndef FALCON9_H
#define FALCON9_H

#include "RocketTypes.h"

/// Falcon9  is a Concrete Proudct for the RocketTypes Hierarchy
///
///  Implements the interface for the RocketTypes product

class Falcon9 : public RocketTypes
{
    public:
        Falcon9(Engine* ,Engine*);
};
#endif
