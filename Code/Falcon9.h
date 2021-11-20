#ifndef FALCON9_H
#define FALCON9_H

#include "RocketTypes.h"

class Falcon9 : public RocketTypes
{
    public:
        Falcon9(MerlinEngine *,VacuumMerlinEngine *);
};
#endif
