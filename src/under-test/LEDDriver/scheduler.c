/*
 * CScheduler.c
 *
 *  Created on: 18 ????? 2016
 *      Author: Gil
 */
#include "common.h"


void initScheduler()
{
	initalizeTimerService();
	initializeLEDs();
}

void turnLEDSonOnTime()
{
	if (itsTime())
	{
		turnAllOn();
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
