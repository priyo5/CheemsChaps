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
     int redo_sim = 1; //By default wants to use new Rocket
    //0 - Re-use rocket
    //1 - Use new Rocket
    //2 - stop simulation

     Rocket* rocket = new Rocket();

     while(redo_sim != 2) //2 - cancel
     {
         if(redo_sim == 1) //Want to use a new Rocket
         {
             rocket = new Rocket();
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
         }

         rocket->printRocket();

         /*************************************************/


         /*************Observer attaching**************/

         cout << "\n------------Adding an observer to the container---------------\n" << endl;

         rocket->hasArrive();       //Checking if the cargo has arrived (which it shouldn't)

         /*************Actual Launch Sequence**************/
         Launch *launch = new Launch(rocket);
         StaticFire *staticFire = new StaticFire(rocket);

         ControlBoard *aoo = new ControlBoard(launch, staticFire);

         /*************************************************/

         int launch_type = 1;
         int exit = -1;
         while(exit ==-1) //Loop doing static tests and modifications until actual launch commences
         {
             cout << "\033[1;34mWould you like to run a static fire test launch, or an Actual launch?\033[0m\n1-Static Fire Test\n2-Actual Launch\n3-Modify rocket" << endl;
             cin >> launch_type;
             if(launch_type == 1)   //Static Fire Test
             {
                 aoo -> PressS();
             }
             if(launch_type == 2)
             {
                 if(rocket->getReadyOrNot()->getPassedTest()) //If static test passed first
                     exit++;                                  //Can now exit and proceed
                 else                                         //Static test was not run first
                     cout << "Please run a Static Fire Test before attempting to launch." << endl;
             }
             if(launch_type == 3)   //Modify
             {
                 rocket->modify();  //Then set the state to LaunchState
             }
         }
         /*********Creating a 'save' of the rocket after all modifications**********/
         RocketCaretaker* RStore = new RocketCaretaker();    //Creating a caretaker for the rocket object
         RStore -> setMemento(rocket -> makeMemento());      //Creating a Memento of the Rocket before it launches
         /*************************************************************************/

         aoo -> PressL();

         cout << "Checking if the goods to be transported have arrived yet:" << endl;
         cout << "--------------------------------------------------------" << endl;
         rocket->hasArrive();    //Checking if the cargo has arrived (which it should)
         cout << endl;

         cout << "The final details of the Rocket after its expedition:" << endl;
         cout << "--------------------------------------------------------" << endl;
         rocket -> printRocket();

         int wantrestore = 0;
         cout << "Would you like to restore the Rocket to it's initial condition and use it in another simulation?\n0-Re-use Rocket\n1-Start a new Rocket\n2-End Simulation" << endl;
         cin >> wantrestore;
         if(wantrestore == 0) //Wants to reuse rocket
         {
             rocket -> restore(RStore -> getMemento());

             cout << "The Rocket's restored condition for the next simulation:" << endl;

             rocket -> printRocket();
             redo_sim = 0;

             /**RUBEN**/
             //Set the rockets state back to StaticFireReady();
             //rocket->getReadyOrNot()->Change();  //dockedReady -> staticFireReady

             /**PRIYO**/
             //make refuel() function to set the engine fuels of the rocket back
         }
         else if(wantrestore == 1) //Want new rocket
         {
             redo_sim = 1;
         }
         else if(wantrestore == 2) //Cancel simulation
         {
            redo_sim = 2;
         }


         /*************************************************/
     } //End big while-loop

    return 0;
}