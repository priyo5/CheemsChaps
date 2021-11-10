#include "DragonSpacecraft.h"

DragonSpacecraft::DragonSpacecraft() {}

void DragonSpacecraft::setCargo(Cargo* cargo) {
    this->cargo = cargo;
}

Cargo* DragonSpacecraft::getCargo() {
    return this->cargo;
}