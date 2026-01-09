#include "robot-config.h"
#include "vex.h"
#include "PID.h"
#include "arm.h"
#include "functions.h"
#include "autons.h"

using namespace vex;


//red left side of the field with middle goal//
void leftAuton() {
drivePID(31, 0.2, 0, 0);
runoutake();
wait(2, sec);
stopIntake();
runIntakeWithoutTopMotor();
drivePID(-8, 0.2, 0, 0);
turnPID(60, 0.3, 0, 0);
drivePID(-15, 0.08, 0, 0);
stopIntake();
turnPID(120, 0.2, 0, 0);
drivePID(-9, 0.2, 0, 0);
runOutakeBottomMiddleGoal();

} 



//red right side of the feild high goal//
void rightAuton() {
drivePID(28, 0.2, 0, 0);
  turnPID(83, 0.3, 0, 0);
  drivePID(15, 0.2, 0, 0);
  runoutake();
  wait(2, sec);
  drivePID(-15, 0.2, 0, 0);
  stopIntake();
 turnPID(-100, 0.3, 0, 0);
}

//to extend the match loader set to true and to retract set to false//
void skillsAuton() {
   
    drivePID(100, 0.5, 0, 0);
}
  
  


