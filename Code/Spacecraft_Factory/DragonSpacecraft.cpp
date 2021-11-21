#include "DragonSpacecraft.h"

DragonSpacecraft::DragonSpacecraft(string sat_type) : Spacecraft(0, 0, nullptr, nullptr)
{
    setCargo(sat_type);
}

void DragonSpacecraft::setCargo(string sat_type)
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