#include "vex.h"

using namespace vex;

void setdrive(double left, double right) 
{
    leftfrontop.spin(fwd, 0.12 * left, volt);
    leftfront.spin(fwd, 0.12 * left, volt);
    leftback.spin(fwd, 0.12 * left, volt);
    rightfrontop.spin(fwd, 0.12 * right, volt);
    rightfront.spin(fwd, 0.12 * right, volt);
    rightback.spin(fwd, 0.12 * right, volt);
}