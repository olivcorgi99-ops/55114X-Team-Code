#include "robot-config.h"
#include "vex.h"
#include "PID.h"
#include "arm.h"
#include "functions.h"
#include "autons.h"

using namespace vex;


//4 push red left //
void leftAuton() {
DoubleActingPiston3.set(true);
drivePID(-27.5, 0.18, 0, 0);
turnPID(90.5, 0.2, 0, 0);
runIntakeWithoutTopMotor();
SingleActingPiston.set(true);
DoubleActingPiston2.set(true);
drivePID(6, 0.14, 0, 0);
turnPID(-2, 0.23, 0, 0);
drivePID(-12.3, 0.14, 0, 0);
wait(1.2, sec);
stopIntake();
drivePID(21.5, 0.18, 0, 0 );
scoreLongGoal();
} 


void rightAuton() {

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

          