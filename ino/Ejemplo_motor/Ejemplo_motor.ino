/* Example sketch to control a stepper motor with TB6560 stepper motor driver, AccelStepper library and Arduino: acceleration and deceleration. More info: https://www.makerguides.com */

// Include the AccelStepper library:
#include <AccelStepper.h>

// Define stepper motor connections and motor interface type. Motor interface type must be set to 1 when using a driver:
#define dirPin 2
#define stepPin 4
#define motorInterfaceType 1
int i = 5000;
int pos = 0;

// Create a new instance of the AccelStepper class:
AccelStepper stepper = AccelStepper(motorInterfaceType, stepPin, dirPin);

void setup() {
  // Set the maximum speed and acceleration:
  stepper.setMaxSpeed(10000);
  stepper.setAcceleration(10000);
}

void loop() {
  // Set the target position:
  pos = pos+i;
  stepper.moveTo(pos);
  // Run to target position with set speed and acceleration/deceleration:
  stepper.runToPosition();

/*  delay(10);
*/
/*
  // Move back to zero:
  stepper.moveTo(0);
  stepper.runToPosition();
  delay(1000);
*/
}
