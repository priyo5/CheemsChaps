/**Concrete Observer**/
#include "ArrivalObserver.h"
#include <iostream>

using namespace std;

ArrivalObserver::ArrivalObserver(ContainerItems *inCont)
{
    this->cont = inCont;
    this->arrived = false;
}

void ArrivalObserver::update()
{
    if(this->cont->hasArrived()) //Satellite has arrived
    {
        this->arrived = true;
    }
    else //Hasn't arrived
    {
        this->arrived = false;
    }
}

void ArrivalObserver::print()
{
    if(this->arrived) //The satellite has arrived
    {
        cout << "\033[1;36mThe Satellite has arrived to its desired orbit.\033[0m" << endl;
    }
    else //The satellite hasn't arrived yet
    {
        cout << "\033[1;36mThe Satellite hasn't arrived to its desired orbit yet.\033[0m" << endl;
    }
}