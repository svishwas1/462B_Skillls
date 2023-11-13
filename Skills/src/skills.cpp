#include "vex.h"

using namespace vex;

void skills()
{   
    leftcata.spin(fwd, -8, volt);
    rightcata.spin(fwd, -8, volt);
    wait(40, sec);
    leftcata.stop();
    rightcata.stop();
}