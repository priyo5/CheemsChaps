#ifndef DOCKEDREADY_H
#define DOCKEDREADY_H

#include "State.h"

class DockedReady: public State {
public:
    virtual void handleChange(Rocket* rocket);
    virtual string getRocketStatus();
};

#endif //ROJECT_DOCKEDREADY_H
