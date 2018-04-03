#include "../../frameworks/yaffut.h"
#include "../../frameworks/fff.h"

DEFINE_FFF_GLOBALS;
FAKE_VALUE_FUNC(int, getCurrentYearFromService);

extern "C" void schedulerInit();
extern "C" void schedulerTurnLEDSonOnTime();
extern "C" bool driverAreAllLEDsOn();

TEST(WhenYearIs2000_LightsAreOn)
{
	RESET_FAKE(getCurrentYearFromService);
	getCurrentYearFromService_fake.return_val = 2000;

	schedulerInit();
	schedulerTurnLEDSonOnTime();
	CHECK(driverAreAllLEDsOn());
}

TEST(WhenYearIs2015_LightsAreOff)
{
	RESET_FAKE(getCurrentYearFromService);
	getCurrentYearFromService_fake.return_val = 2018;

	schedulerInit();
	schedulerTurnLEDSonOnTime();
	CHECK(!driverAreAllLEDsOn());
}
