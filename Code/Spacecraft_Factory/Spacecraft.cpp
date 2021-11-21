#include "Spacecraft.h"

Spacecraft::Spacecraft(int weight)
{
    this->weight = weight;
}

void Spacecraft::setWeight(int weightTonnes) {
    this->weight = weightTonnes;
}