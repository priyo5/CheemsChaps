#include "ControlBoard.h"

using namespace std;

ControlBoard::ControlBoard(Launch *L, StaticFire *S)
{
    this -> L = L;
    this -> S = S;
}

void ControlBoard::PressL()
{
    this -> L -> excecute();
}

void ControlBoard::PressS()
{
    this -> S -> excecute();
}