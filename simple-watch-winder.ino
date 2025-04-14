//Watch winder with Arduino

#include <Stepper.h>

const float STEPS_PER_REV = 32;

int StepsRequired;

Stepper steppermotor(STEPS_PER_REV, 8, 10, 9, 11);

void setup()
{
  // Nothing needed setup
}

void loop()
{
  \
    steppermotor.setSpeed(1000);
  StepsRequired = 3072000;
  steppermotor.step(StepsRequired);
  delay(2000);

  steppermotor.setSpeed(1000);
  StepsRequired = -3072000;
  steppermotor.step(StepsRequired);

  delay(30 * 60 * 1000);
}