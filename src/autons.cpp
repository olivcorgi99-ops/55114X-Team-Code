#include "robot-config.h"
#include "vex.h"
#include "PID.h"
#include "arm.h"
#include "functions.h"
#include "autons.h"

using namespace vex;


//4 push red left //
void leftAuton() {
drivePID(16, 0.3, 0, 0);
//DoubleActingPiston.set(false);  this is how you use pnumatics
//DoubleActingPiston2.set(false);  this is how you use pnumatics
} 



//4 push blue right//
void rightAuton() {
drivePID(36, 0.2, 0, 0);

}

//to extend the match loader set to true and to retract set to false//
void skillsAuton() {

drivePID(45, 0.2, 0, 0);
}
  
void noauton() {
drivePID(16, 0.3, 0, 0);
}

