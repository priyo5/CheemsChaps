#include "RocketMemento.h"

RocketMemento::RocketMemento(string n, int f, int ne, RocketState* rs):
    name(n),
    fuel(f),
    numEngines(ne),
    rstate(rs)
{}