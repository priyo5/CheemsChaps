#include "DockedReady.h"
#include "StaticFireReady.h"

#include <iostream>
using namespace std;

void DockedReady::handleChange(Rocket *rocket) {
    cout << "\033[1;32mThe rocket is currently docked!\033[0m\n\n";
    rocket->setState(new StaticFireReady());
}

string DockedReady::getRocketStatus() {
    return "Docked";
}