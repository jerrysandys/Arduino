#include <Servo.h>
#include <LiquidCrystal.h>
#include "Program.h"
#include "RGBLed.h"
#include "Timer.h"
#include "Sensor.h"
#include "AbsoluteServo.h"
#include "PiezoSpeaker.h"
#include "LCD.h"

#include "PinwheelProgram.h"

PinwheelProgram program;

void setup()
{
  program.setup();
}

void loop()
{
  program.loop();
}

