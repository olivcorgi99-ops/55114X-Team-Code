#pragma once

/* These prevent header files from being included multiple times*/


struct drivePIDSettings{
  double maxSpeed = 100;
};

void drivePID(double targetInches, double kP, double kI, double kD);
void drivePIDPlus(double targetInches, double kP = 0.7, double kI = 0.7, double kD = 1.8, drivePIDSettings settings = {});
void turnPID(double targetAngle, double kP, double kI, double kD);


