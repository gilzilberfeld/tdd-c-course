#include "../../frameworks/yaffut.h"
#include "LEDDriverTestSuite.h"

extern "C" void driverInitializeLEDs();
extern "C" void driverTurnAllOn();
extern "C" bool driverAreAllLEDsOn();

SUITE_TEST(LEDDriverTestSuite, All_LEDs_Are_Off_After_Initialization)
{
	CHECK(!driverAreAllLEDsOn());
}


SUITE_TEST(LEDDriverTestSuite,All_LEDs_Are_On_After_Turning_All_On)
{
}

