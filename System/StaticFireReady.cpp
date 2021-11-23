#include "StaticFireReady.h"
#include "LaunchReady.h"

#include <iostream>

using namespace std;
/// Handles the state and sets new state
///
/// Handling through concrete state by setting the next state.
/// @param Current rocket
void StaticFireReady::handleChange(Rocket *rocket) {
    cout << "\033[1;32mThe Rocket has passed the static fire test, ready for launch!\033[0m\n\n";
    rocket->setState(new LaunchReady());
}
/// Return current state
///
/// Handling through concrete state by setting the next state.
/// @return Current state of rocket as string
string StaticFireReady::getRocketStatus() {
    return "StaticFire";
}