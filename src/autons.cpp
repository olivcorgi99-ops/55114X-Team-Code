#include "robot-config.h"
#include "vex.h"
#include "PID.h"
#include "arm.h"
#include "functions.h"
#include "autons.h"

using namespace vex;


//red left side of the field with middle goal//
void leftAuton() {
drivePID(30, 0.2, 0, 0);
runoutake();
wait(2, sec);
stopIntake();
runIntake();
drivePID(-60, 0.2, 0, 0);
turnPID(60, 0.3, 0, 0);
drivePIDSettings setting;
setting.maxSpeed = 30;
drivePIDPlus(-40, 0.2, 0, 0, setting);
wait(2, sec);

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
  drivePID(0, 0, 0, 0);
  turnPID(0, 0, 0, 0);
  matchloader.set(true);
  wait(2, sec);
  matchloader.set(false);
  drivePID(-1, 0, 0, 0);
  runoutake();
 wait(2, sec);
 stopIntake();
  drivePID(-1, 0, 0, 0);
 turnPID(-0, 0, 0, 0);
  drivePID(0, 0, 0, 0);
  turnPID(0, 0, 0, 0);
  drivePID(0, 0, 0, 0);
  matchloader.set(true);
 wait(3, sec);
matchloader.set(false);
 drivePID(0, 0, 0, 0);
  runoutake();
  wait(2, sec);
stopIntake();
drivePID(-0, 0, 0, 0);
turnPID(0, 0, 0, 0);
drivePID(0, 0, 0, 0);
turnPID(0, 0, 0, 0);
 drivePID(0, 0, 0, 0);
  matchloader.set(true);
  wait(2, sec);
  matchloader.set(false);
  drivePID(-0, 0, 0, 0);
  runIntake();
  wait(2, sec);
  stopIntake();
   drivePID(-0, 0, 0, 0);
    
}
  
  


