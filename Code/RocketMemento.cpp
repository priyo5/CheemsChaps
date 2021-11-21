#include "RocketMemento.h"

RocketMemento::RocketMemento(int rf, int dd, RocketState* rs):
    RemainingFuel(rf),
    DestinationDistance(dd),
    rstate(rs)
{}