#include "StaticFireReady.h"
#include "LaunchReady.h"

#include <iostream>

using namespace std;

void StaticFireReady::handleChange(Rocket *rocket) {
    cout << "\033[1;32mThe Rocket has passed the static fire test, ready for launch!\033[0m\n\n";
    rocket->setState(new LaunchReady());
}

string StaticFireReady::getRocketStatus() {
    return "StaticFire";
}