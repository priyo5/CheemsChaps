#include "DockedReady.h"
#include "StaticFireReady.h"

using namespace std;

void DockedReady::handleChange(Rocket *rocket) {
    rocket->setState(new StaticFireReady());
}

string DockedReady::getRocketStatus() {
    return "\033[1;32mThe rocket is currently docked!\033[0m\n\n";
}