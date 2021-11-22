/**Concrete Decorator B**/

#ifndef STARLINK_H
#define STARLINK_H
#include "ContainerItems.h"

class Starlink : public ContainerItems
{
public:
    Starlink();
    ~Starlink();
    void print();
};

#endif
