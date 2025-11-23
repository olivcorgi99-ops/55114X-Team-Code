#include "robot-config.h"
#include "vex.h"
#include "PID.h"
#include "arm.h"
#include "functions.h"
#include "autons.h"

using namespace vex;


//red left side of the field//
void leftAuton() {
  drivePID(28, 0.2, 0, 0);
  turnPID(-83, 0.3, 0, 0);
  drivePID(15, 0.2, 0, 0);
  runoutake();
}

//red right side of the feild//
void rightAuton() {
  drivePID(28, 0.2, 0, 0);
  turnPID(83, 0.3, 0, 0);
  drivePID(15, 0.2, 0, 0);
  runoutake();
 
}
void skillsAuton() {
  drivePID(12, 0.5, 0.0, 0.0);
  

}
  
  


