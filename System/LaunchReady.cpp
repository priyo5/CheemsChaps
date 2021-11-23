#include "LaunchReady.h"
#include "DockedReady.h"
#include <iostream>

/// Handles the state and sets new state
///
/// Handling through concrete state by setting the next state.
/// @param Current rocket
void LaunchReady::handleChange(Rocket *rocket) {
    cout << "\033[1;32mWe have blastoff\033[0m\n\n";
    rocket->setState(new DockedReady());
}

/// Return current state
///
/// Handling through concrete state by setting the next state.
/// @return Current state of rocket as string
string LaunchReady::getRocketStatus() {
    return "Launch";
}