#include <iostream>
#include "Cargo.h"
#include "Container.h"
#include "ContainerItems.h"
#include "Starlink.h"
#include "Satellite.h"

int main()
{
    //Daniel - Testing filling cargo with container items
    Cargo* container = new Container();
    container->add(new Satellite());

    return 0;
}