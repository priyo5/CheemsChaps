#define underline "\033[4m"
#define sunderline "\033[0m"
#include <iostream>
#include "Rocket.h"
#include "Launch.h"
#include "StaticFire.h"
#include "ControlBoard.h"
#include "RocketCaretaker.h"
#include "RocketMemento.h"
#include "RocketState.h"

using namespace std;

int main()
{
     Rocket* rocket = new Rocket();
     int type = 0;
     int destination = 0;

     

     /** ASKING THE USER WHAT ROCKET HE WANTS TO BUILD**/
     cout <<underline<<"\n\033[1;33mCHOOSE YOUR ROCKET!\033[0m\n" <<sunderline;

    cout << "\033[1;34mWhich planet is your destination?\033[0m\n\n0-Mars (350000Km) \n1-Jupiter (750000Km)\n2-The Moon (35000Km)" << endl;
    cin >> destination;

     cout << "\033[1;34mWhat purpose would you like your Rocket to have?\033[0m\n\n0-Transport people\n1-Transport a single Satellite\n2-Transport a Starlink fleet\n" << endl;
     cin >> type;

     rocket->BuildRocket(type);

     rocket->setDestination(destination);
     cout << "\n";

     rocket->printRocket();
    
    /*************************************************/


    /*************Observer attaching**************/

    cout << "\n------------Adding an observer to the container---------------\n" << endl;

    rocket->hasArrive();       //Checking if the cargo has arrived (which it shouldn't)

    /*************Actual Launch Sequence**************/
     Launch *launch = new Launch(rocket);
     StaticFire *staticFire = new StaticFire(rocket);

     ControlBoard *aoo = new ControlBoard(launch, staticFire);

    /*************Creating a 'save' of the rocket**************/

    RocketCaretaker* RStore = new RocketCaretaker();    //Creating a caretaker for the rocket object

    RStore -> setMemento(rocket -> makeMemento());      //Creating a Memento of the Rocket before it launches


    /*************************************************/

    int launch_type = 1;
    while(launch_type !=2) //Loop doing static tests and modifications until actual launch commences
    {
        cout << "\033[1;34mWould you like to run a static fire test launch, or an Actual launch?\033[0m\n1-Static Fire Test\n2-Actual Launch\n3-Modify rocket" << endl;
        cin >> launch_type;
        if(launch_type == 1)   //Static Fire Test
            aoo -> PressS();
        if(launch_type == 3)   //Modify
            rocket->modify();  //Then set the state to LaunchState
    }
    //RUBEN - Check the state and make sure its ready for launch before actually launching the rocket
    aoo -> PressL();

    rocket->hasArrive();    //Checking if the cargo has arrived (which it should)

    cout << "The final details of the Rocket after its expedition:" << endl;

    rocket -> printRocket();

    int wantrestore = 0;
    cout << "Would you like to restore the Rocket to it's initial condition?\n0-Yes\n1-No" << endl;
    cin >> wantrestore;
    if(wantrestore == 0)
    {
        rocket -> restore(RStore -> getMemento());

        cout << "The Rocket's restored condition:" << endl;

        rocket -> printRocket();
    }
    
    /*************************************************/


    return 0;
}