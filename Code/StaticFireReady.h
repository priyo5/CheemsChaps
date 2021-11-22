#ifndef CODE_STATICFIREREADY_H
#define CODE_STATICFIREREADY_H
#include "State.h"

class StaticFireReady : public State {
public:
    StaticFireReady();
    void handleLaunch();
    void handleStaticFireTest();
    bool getPassedTest();
};

#endif //CODE_STATICFIREREADY_H
