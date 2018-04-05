#include "common.h"

int getCurrentYearFromService();
int (*getCurrentYearFromServicePtr)() = getCurrentYearFromService;

void schedulerInit()
{
	initializeTimeService();
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
	if (getCurrentYearFromServicePtr() == 2000)
		return true;
	else
		return false;
}

