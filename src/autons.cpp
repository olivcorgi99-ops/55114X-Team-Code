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
DoubleActingPiston3.set(true);
drivePID(27.5, 0.18, 0, 0);
turnPID(-90.5, 0.2, 0, 0);
runIntakeWithoutTopMotor();
SingleActingPiston.set(true);
DoubleActingPiston2.set(true);
drivePID(-6, 0.14, 0, 0);
turnPID(2, 0.23, 0, 0);
drivePID(12.3, 0.14, 0, 0);
wait(1.2, sec);
stopIntake();
drivePID(-21.5, 0.18, 0, 0 );
scoreLongGoal();

}

//NO AUTONNNNNNNNN AHHHHHHHHHHHHHHHHHHH//
void skillsAuton() {
drivePID(10, 0.14, 0, 0);

}
  
void noauton() {
drivePID(16, 0.3, 0, 0);
}

          