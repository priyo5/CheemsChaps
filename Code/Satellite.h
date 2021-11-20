/**Concrete Decorator A**/
/**Concrete Subject (OBSERVER PATTERN)**/

#ifndef SATELLITE_H
#define SATELLITE_H
#include "ContainerItems.h"

using namespace std;

class Satellite : public ContainerItems
{
public:
    Satellite();
    ~Satellite();

    //to print the number of satellites in the container
    void print();
};

#endif
