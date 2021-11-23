#ifndef DOCKEDREADY_H
#define DOCKEDREADY_H

#include "State.h"
/// DockedReady is a concreteState participant for the state design pattern
///
/// DockedReady is the state where the rocket has reached its target destination is not currently flying or being tested
class DockedReady: public State {
public:
    virtual void handleChange(Rocket* rocket);
    virtual string getRocketStatus();
};

#endif //ROJECT_DOCKEDREADY_H
