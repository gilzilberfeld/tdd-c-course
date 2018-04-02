#include "common.h"

bool ledsAreOn = false;

void initializeLEDs()
{
	ledsAreOn = false;
}

void turnAllOn()
{
	ledsAreOn = true;
}


bool areAllLEDSon()
{
	return ledsAreOn;
}
