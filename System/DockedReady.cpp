#include "DockedReady.h"
#include "StaticFireReady.h"

#include <iostream>
using namespace std;
/// Handles the state and sets new state
///
/// Handling through concrete state by setting the next state.
/// @param Current rocket
void DockedReady::handleChange(Rocket *rocket) {
    cout << "\033[1;32mThe rocket is currently docked!\033[0m\n\n";
    rocket->setState(new StaticFireReady());
}
/// Return current state
///
/// Handling through concrete state by setting the next state.
/// @return Current state of rocket as string
string DockedReady::getRocketStatus() {
    return "Docked";
}