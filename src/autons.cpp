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
drivePID(31, 0.2, 0, 0);
runoutake();
wait(2, sec);
stopIntake();
runIntakeWithoutTopMotor();
drivePID(-8, 0.2, 0, 0);
turnPID(57, 0.3, 0, 0);
drivePID(-18, 0.08, 0, 0);
stopIntake();
turnPID(128, 0.2, 0, 0);
drivePID(-9, 0.2, 0, 0);
runOutakeBottomMiddleGoal();
wait(5, seconds);
stopIntake();
drivePID(25, 0.2, 0, 0);
turnPID(127, 0.3, 0, 0);
drivePID(-24, 0.2, 0, 0);
turnPID(110, 0.2, 0, 0);
drivePID(42, 0.2, 0, 0); 

//drivePID(-10, 0.2, 0 , 0);
//drivePID(38, 0.35, 0, 0);

}

//to extend the match loader set to true and to retract set to false//
void skillsAuton() {

drivePID(27, 0.2, 0, 0);
runoutake();
wait(2, sec);
stopIntake();
runIntakeWithoutTopMotor();
drivePID(-6, 0.15, 0, 0);
turnPID(60, 0.3, 0, 0);
drivePID(-12, 0.1, 0, 0);
drivePID(-5, 0.07, 0, 0);
turnPID(130, 0.2, 0, 0);
stopIntake();
drivePID(-13, 0.2, 0, 0);
runOutakeBottomMiddleGoal();
wait(5, seconds);
stopIntake();
drivePID(12, 0.2, 0, 0);
turnPID(-40, 0.2, 0, 0);
runIntakeWithoutTopMotor();
drivePID(-62, 0.15, 0, 0);



}
  


