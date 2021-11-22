#include "StaticFireReady.h"
#include "LaunchReady.h"

using namespace std;

void StaticFireReady::handleChange(Rocket *rocket) {
    rocket->setState(new LaunchReady());
}

string StaticFireReady::getRocketStatus() {
    return "\033[1;32mThe Rocket has passed the static fire test, ready for launch!\033[0m\n\n";
}