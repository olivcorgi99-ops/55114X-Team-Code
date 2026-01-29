#include "robot-config.h"
#include "vex.h"
#include "PID.h"
#include "arm.h"
#include "functions.h"
#include "autons.h"

using namespace vex;


//red left side of the field with middle goal//
void leftAuton() {
drivePID(3, 0.3, 0, 0);

} 



//red right side of the feild high goal//
void rightAuton() {


drivePID(27, 0.23, 0, 0);
runoutake();
wait(2, sec);
stopIntake();
runIntakeWithoutTopMotor();
drivePID(-6, 0.22, 0, 0);
turnPID(60, 0.3, 0, 0);
drivePID(-12.15, 0.12, 0, 0);
drivePID(-4.85, 0.09, 0, 0);
turnPID(130, 0.25, 0, 0);
stopIntake();
drivePID(-12.4, 0.18, 0, 0);
runOutakeBottomMiddleGoal();

/*drivePID(31, 0.2, 0, 0);
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
drivePID(42, 0.2, 0, 0);*/ 

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
drivePID(-6, 0.2, 0, 0);
turnPID(60, 0.3, 0, 0);
drivePID(-12, 0.1, 0, 0);
drivePID(-5, 0.079, 0, 0);
stopIntake();
turnPID(130, 0.25, 0, 0);
drivePID(-12, 0.2, 0, 0);
runOutakeBottomMiddleGoal();
wait(3, seconds);
stopIntake();
drivePID(25, 0.2, 0, 0);
turnPID(127, 0.3, 0, 0);
drivePID(-19, 0.2, 0, 0);
turnPID(110, 0.2, 0, 0);
drivePID(42, 0.2, 0, 0); 

//drivePID(-10, 0.2, 0 , 0);
//drivePID(38, 0.35, 0, 0);
    
/*drivePID(27, 0.2, 0, 0);
runoutake();
wait(2, sec);
stopIntake();
runIntakeWithoutTopMotor();
drivePID(-6, 0.15, 0, 0);
turnPID(60, 0.3, 0, 0);
drivePID(-12, 0.1, 0, 0);
drivePID(-5, 0.079, 0, 0);
stopIntake();
turnPID(130, 0.2, 0, 0);
drivePID(-12.4, 0.17, 0, 0);
runOutakeBottomMiddleGoal();
wait(3, seconds);
stopIntake();
drivePID(12, 0.2, 0, 0);
turnPID(-38, 0.2, 0, 0);
runIntakeWithoutTopMotor();
drivePID(-63, 0.15, 0, 0);
stopIntake();
turnPID(55, 0.2, 0, 0);
drivePID(25, 0.2, 0, 0);
turnPID(-50, 0.2, 0, 0);
scoreLongGoal();
wait(2, seconds);
drivePID(-11, 0.2, 0, 0);
turnPID(240, 0.2, 0, 0);
drivePID(70, 0.25, 0, 0);
turnPID(90, 0.2, 0, 0);
runIntakeWithoutTopMotor();
drivePID(60, 0.2, 0,0);*/
/*stopIntake();
turnPID(30, 0.2, 0, 0);
drivePID(10, 0.2, 0, 0);
turnPID(150, 0.2, 0, 0);
drivePID(13, 0.2, 0, 0);
scoreLongGoal();
drivePID(-11, 0.2, 0, 0);
turnPID(-160, 0.2, 0, 0);
drivePID(45, 0.2, 0, 0);*/
}
  


