#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;
controller Controller = controller(primary);
motor leftfrontop = motor(PORT2, false);
motor leftfront = motor(PORT3, true);
motor leftback = motor(PORT6, true); 
motor rightfrontop = motor(PORT9, true);
motor rightfront = motor(PORT1, false);
motor rightback = motor(PORT13, false); 
motor leftcata = motor(PORT12, false);
motor rightcata = motor(PORT8, true);
digital_out leftwings = digital_out(Brain.ThreeWirePort.D);
digital_out rightwings = digital_out(Brain.ThreeWirePort.A);

// VEXcode device constructors

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}