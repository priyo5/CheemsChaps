#include "LaunchReady.h"
#include "DockedReady.h"

void LaunchReady::handleChange(Rocket *rocket) {
    rocket->setState(new DockedReady());
}

string LaunchReady::getRocketStatus() {
    return "\033[1;32mWe have blastoff\033[0m\n\n";
}