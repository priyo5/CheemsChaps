#include "DragonSpacecraft.h"
#include "ContainerItems.h"
#include "Satellite.h"
#include "Starlink.h"
#include "Cargo.h"

DragonSpacecraft::DragonSpacecraft(int weight) : Spacecraft(weight)
{
    cargo = nullptr;
}

void DragonSpacecraft::setCargo(int weight, string sat_type)
{
    ContainerItems * tempContainer;
    tempContainer = new ContainerItems();

    //Decorating according the sat_type
    if(sat_type == "starlink")
    {
        tempContainer->add(new Satellite());
    }
    else //Satellite
    {
        tempContainer->add(new Starlink());
    }

    //Adding an observer
    ArrivalObserver* sat_1_Observer = new ArrivalObserver(tempContainer);
    tempContainer->attach(sat_1_Observer);
    sat_1_Observer->print(); //Should be not arrived yet

    this->cargo = tempContainer;
    this->cargo_monitor = sat_1_Observer;
}

ContainerItems* DragonSpacecraft::getCargo()
{
    return this->cargo;
}

ArrivalObserver* DragonSpacecraft::getObserver()
{
    return this->cargo_monitor;
}