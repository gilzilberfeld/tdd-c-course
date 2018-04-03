#include "../../frameworks/yaffut.h"
extern "C" void driverInitializeLEDs();
extern "C" void driverTurnAllOn();
extern "C" bool driverAreAllLEDsOn();

TEST(All_LEDs_Are_Off_After_Initialization)
{
	CHECK(!driverAreAllLEDsOn());
}


TEST(All_LEDs_Are_On_After_Turning_All_On)
{
}

