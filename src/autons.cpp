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



//Notes for Niya
//  - current power 0.55 in pid.cpp
//  - drive Kp= 0.29
//  - turnkp = 0.37
void rightAuton() {
drivePID(20, 0.29, 0, 0);
turnPID(-90, 0.37, 0, 0);
//drivePID(5, 0.3, 0, 0);
//turnPID(40, 0.3, 0, 0);
//runIntakeWithoutTopMotor(); 
//drivePID(5, 0.3, 0, 0);
//stopIntake();
}

//to extend the match loader set to true and to retract set to false//
void skillsAuton() {

drivePID(0, 0.2, 0, 0);
}
  
void noauton() {
drivePID(16, 0.3, 0, 0);
}

          