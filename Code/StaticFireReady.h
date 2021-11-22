#ifndef CODE_STATICFIREREADY_H
#define CODE_STATICFIREREADY_H
#include "State.h"

class StaticFireReady : public State {
public:
    virtual void handleChange(Rocket* rocket);
    virtual string getRocketStatus();
};

#endif //CODE_STATICFIREREADY_H
