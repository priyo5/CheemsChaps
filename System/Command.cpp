#include "Command.h"

using namespace std;

Command::Command(Rocket *receiver)
{
    this -> receiver = receiver; 
}

Rocket *Command::getReceiver()
{
    return this -> receiver;
}