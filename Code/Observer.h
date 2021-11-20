#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>

using namespace std;

class Observer
{
public:
    Observer();
    virtual void update() = 0;
    virtual void print() = 0;
};

#endif
