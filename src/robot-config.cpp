// src/robot-config.cpp
#include "robot-config.h"

//Configuration!

/*Reminders: 
Make sure that all your ports are different and correct! 
Make sure all of your motor + piston names are different and not confusing.
If it seems like some of your motors are running against eachother in the drivetrain, try switching around the true/false

*/

vex::brain Brain;
vex::controller Controller(vex::controllerType::primary);
vex::motor LB(vex::PORT20, vex::gearSetting::ratio6_1, true); //Left Back Motor
vex::motor LM(vex::PORT17,  vex::gearSetting::ratio6_1, true); //Left Middle Motor
vex::motor LF(vex::PORT9, vex::gearSetting::ratio6_1, true); //Left Front Motor
vex::motor RB(vex::PORT4, vex::gearSetting::ratio6_1, false); //Right Back Motor
vex::motor RM(vex::PORT19, vex::gearSetting::ratio6_1, false); //Right Middle Motor
vex::motor RF(vex::PORT7, vex::gearSetting::ratio6_1, false); //Right Front Motor


vex::motor_group LeftDrive(LF, LM, LB);
vex::motor_group RightDrive(RF, RM, RB);

// Drivetrain: wheel travel = 320mm, track width = 280mm, wheelbase = 300mm (adjust as needed)
vex::drivetrain Drivetrain(LeftDrive, RightDrive, 82.55, 280, 300);

//vex::motor Arm1(vex::PORT1, vex::gearSetting::ratio18_1, true); //Arm motor
//vex::motor Arm2(vex::PORT2, vex::gearSetting::ratio18_1, true); //Arm motor

vex::digital_out DoubleActingPiston(Brain.ThreeWirePort.H);
vex::digital_out SingleActingPiston(Brain.ThreeWirePort.B);

vex::motor topIntakeMotor(vex::PORT3, vex::gearSetting::ratio6_1, false); //Right Front Motor
vex::motor middleIntakeMotor(vex::PORT2, vex::gearSetting::ratio6_1, true); //Right Front Motor
vex::motor bottomIntakeMotor(vex::PORT12, vex::gearSetting::ratio6_1, false); 
vex::motor bottombottomIntakeMotor(vex::PORT10, vex::gearSetting::ratio6_1, false); 

vex::motor_group IntakeMotors(topIntakeMotor,middleIntakeMotor, bottomIntakeMotor, bottombottomIntakeMotor);

vex::inertial InertialSensor(vex::PORT11);

vex::optical OpticalSensor(vex::PORT1);

void vexcodeInit() {
  InertialSensor.calibrate();
  DoubleActingPiston.set(false); // retracted
  SingleActingPiston.set(false); // off
  while (InertialSensor.isCalibrating()) {
    vex::task::sleep(100);
  }
}