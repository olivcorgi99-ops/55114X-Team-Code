#pragma once
#define FUNCTIONS_H 
#ifdef FUNCTIONS_H
double inchesToDegrees(double inches);
void setDTPosition(double inches);
void spinDT(double velocity);
void stopDT();
void spinRightDT(double velocity);
void spinLeftDT(double velocity);
void spinDTPosition(double velocity, double targetInches);
void turnForTime(double velocity, double time);
void runIntake();
void stopIntake();
void runoutake();
void spinDTPosition(double velocity, double targetInches);
void turnForTime(double velocity, double time);
void curve(double leftPower, double rightPower);

#endif //end of define
