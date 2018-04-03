#include "common.h"
#include <stdint.h>

bool ledsAreOn = false;
uint16_t address = 0;

void driverInitializeLEDs()
{
	ledsAreOn = false;
}

void driverTurnAllOn()
{
	ledsAreOn = true;
}


bool driverAreAllLEDsOn()
{
	return ledsAreOn;
}
