#include "vex.h"

using namespace vex;

void set_wings()
{
    if (Controller.ButtonL1.pressing())
    {
        leftwings.set(true);
        rightwings.set(true);
        wait(5, msec);
    }
    else if (Controller.ButtonL2.pressing())
    {
        leftwings.set(false);
        rightwings.set(false);
        wait(5, msec);
    }
}