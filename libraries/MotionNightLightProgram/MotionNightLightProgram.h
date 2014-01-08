#ifndef __MOTIONNIGHTLIGHTPROGRAM_H__
#define __MOTIONNIGHTLIGHTPROGRAM_H__

#include "Program.h"
#include "PiezoSensor.h"
#include "PhotoSensor.h"
#include "LedGroup.h"
#include "Timer.h"

class MotionNightLightProgram : public Program
{
protected:
	virtual void init();
	virtual void update(float dt);

private:
	PiezoSensor vibrationSensor;
	PhotoSensor photoSensor;
	LedGroup led;
	Timer onTimer;
	Timer fadeTimer;

	enum LedState {
		STATE_OFF,
		STATE_ON,
		STATE_FADE
	} ledState;
};

#endif