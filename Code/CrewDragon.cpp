#include "CrewDragon.h"

using namespace  std;

#include <iostream>

CrewDragon::CrewDragon(int num) : Spacecraft(num, 20, nullptr, nullptr)
{
    if (num > 20)
    {
        cout << "Twenty is the maximum number of people of allowed.\n";
        int num = num - 20;
        cout << "We got rid of " << num << " people :)\n";
    }
}