#include "RocketMemento.h"

RocketMemento::RocketMemento(int np, int ns, int rf, RocketState* rs):
    RemainingFuel(rf),
    numPeople(np),
    numSats(ns),
    rstate(rs)
{}