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
drivePID(27.5, 0.15, 0, 0);
turnPID(85, 0.17, 0, 0);
drivePID(-20, 0.3, 0, 0);
scoreLongGoal();

} 


void rightAuton() {

DoubleActingPiston3.set(true);
DoubleActingPiston.set(true);
drivePID(26.5, 0.15, 0, 0);
turnPID(-85, 0.17, 0, 0);
drivePID(-20, 0.3, 0, 0);
scoreLongGoal();
wait(1.2, sec);
drivePID(7.5, 0.12, 0, 0);
turnPID(60, 0.17, 0, 0);
drivePID(-9.7, 0.12, 0, 0);
turnPID(-62.5, 0.17, 0, 0);
DoubleActingPiston.set(false);
drivePID(-14, 0.3, 0, 0);

    

/*DoubleActingPiston3.set(true);
drivePID(27.5, 0.18, 0, 0);
turnPID(-90.5, 0.2, 0, 0);
runIntakeWithoutTopMotor();
DoubleActingPiston2.set(true);
drivePID(-6, 0.14, 0, 0);
turnPID(2, 0.23, 0, 0);
drivePID(11, 0.14, 0, 0);
drivePID(-2, 0.14, 0, 0);
drivePID(1.5, 0.14, 0, 0);
wait(0.8, sec);
stopIntake();
drivePID(-10, 0.18, 0, 0 );
turnPID(-3, 0.23, 0, 0);
drivePID(-12.5, 0.14, 0, 0);
scoreLongGoal(); */

}

//NO AUTONNNNNNNNN AHHHHHHHHHHHHHHHHHHH//
void skillsAuton() {
    drivePID(-10, 0.14, 0, 0);
    DoubleActingPiston2.set(true);
    drivePID(50, 0.8, 0, 0);


}
  
void noauton() {
drivePID(16, 0.3, 0, 0);
}

       