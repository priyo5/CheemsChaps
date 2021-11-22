#include "DragonSpacecraft.h"

DragonSpacecraft::DragonSpacecraft(string sat_type) : Spacecraft(0, 0, nullptr, nullptr)
{
    DragonSpacecraft::setCargo(sat_type);
}

void DragonSpacecraft::setCargo(string sat_type)
{
    ContainerItems * tempContainer;
    tempContainer = new ContainerItems();

    //Decorating according the sat_type
    if(sat_type == "starlink")
    {
        tempContainer->add(new Starlink());
    }
    else //Satellite
    {
        tempContainer->add(new Satellite());
    }

    //Adding an observer
    ArrivalObserver* sat_1_Observer = new ArrivalObserver(tempContainer);
    tempContainer->attach(sat_1_Observer);
    //sat_1_Observer->print(); //Should be not arrived yet

    if(sat_type == "starlink")
        setNumSats(60);
    else
        setNumSats(1);

    Spacecraft::setCargo(tempContainer);
    Spacecraft::setObserver(sat_1_Observer);
}