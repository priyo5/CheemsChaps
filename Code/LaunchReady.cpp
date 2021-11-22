#include "LaunchReady.h"
#include "DockedReady.h"
#include <iostream>

void LaunchReady::handleChange(Rocket *rocket) {
    cout << "\033[1;32mWe have blastoff\033[0m\n\n";
    rocket->setState(new DockedReady());
}

string LaunchReady::getRocketStatus() {
    return "Launch";
}