#include "vex.h"

using namespace vex;

void setcatapult() 
{
    if (Controller.ButtonR1.pressing() == true)
    {
        leftcata.spin(fwd, -10, volt);
        rightcata.spin(fwd, -10, volt);
    }
    else
    {
        leftcata.stop();
        rightcata.stop();
    }
        
}