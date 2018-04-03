#include "common.h"

void schedulerInit()
{
	initalizeTimerService();
	driverInitializeLEDs();
}

void schedulerTurnLEDSonOnTime()
{
	if (itsTime())
	{
		driverTurnAllOn();
	}
}

int itsTime()
{
	// the function is defined elsewhere and
	// needs to be faked to be tested
	if (getCurrentYearFromService() == 2000)
		return true;
	else
		return false;
}
