#include "CrewDragon.h"

using namespace  std;

#include <iostream>

CrewDragon::CrewDragon(int numpeople) : Spacecraft(numPeople, 20, nullptr, nullptr)
{
    if  (numpeople > 20)
    {
        cout << "Twenty is the maximum number of people of allowed.\n";
        int num = numpeople - capacity;
        cout << "We got rid of " << num << " people :)\n";
        setNumpeople(20);
    }
}