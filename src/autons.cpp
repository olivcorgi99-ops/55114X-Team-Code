#include "robot-config.h"
#include "vex.h"
#include "PID.h"
#include "arm.h"
#include "functions.h"
#include "autons.h"

using namespace vex;


//4 push red left //
void leftAuton() {
drivePID(16, 0.2, 0, 0);
turnPID(90, 0.6, 0, 0);
//DoubleActingPiston.set(false);  this is how you use pnuematics
//DoubleActingPiston2.set(false);  this is how you use pnuematics
} 


void rightAuton() {
//Notes for Niya
//  - current power 0.55 in PID.cpp
//  - drive Kp= 0.29
//  - turnkp = 0.37
//. - when tuning PID start with Kp and drive power in PID.cpp check internial sensor is port 1 in robot-config.cpp1
SingleActingPiston.set(true);
drivePID(27.5, 0.18, 0, 0);
turnPID(-82, 0.25, 0, 0);
drivePID(-7, 0.14, 0, 0);
runIntakeWithoutTopMotor();
DoubleActingPiston2.set(true);
wait(0.3, sec);
drivePID(10.5, 0.17, 0, 0);
wait(1 , sec);
stopIntake();
drivePID(-11, 0.18, 0, 0);
turnPID(7, 0.25, 0, 0);
drivePID(-12, 0.18, 0, 0);
scoreLongGoal();
/*runIntakeWithoutTopMotor();
SingleActingPiston.set(true);
DoubleActingPiston2.set(true);
drivePID(-7, 0.14, 0, 0);
drivePID(2, 0.23, 0, 0);
drivePID(9.8, 0.14, 0, 0);
wait(1.5, sec);
stopIntake();
turnPID(-4, 0.25, 0, 0);
drivePID(-20.5, 0.18, 0, 0);
scoreLongGoal();*/
//stopIntake(   r);
}

//to extend the match loader set to true and to retract set to false//
void skillsAuton() {

drivePID(0, 0.2, 0, 0);
}
  
void noauton() {
drivePID(16, 0.3, 0, 0);
}

          