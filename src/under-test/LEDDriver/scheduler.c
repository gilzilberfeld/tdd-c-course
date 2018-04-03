#include "common.h"

void initScheduler()
{
	initalizeTimerService();
	driverInitializeLEDs();
}

void turnLEDSonOnTime()
{
	if (itsTime())
	{
		driverTurnAllOn();
	}
}

int itsTime()
{
	if (getCurrentYearFromService() == 2000)
		return true;
	else
		return false;
}

int getCurrentYearFromService()
{
	return 0;
}
