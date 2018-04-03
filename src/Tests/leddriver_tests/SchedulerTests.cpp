#include "../../frameworks/yaffut.h"
#include "../../frameworks/fff.h"


DEFINE_FFF_GLOBALS;
FAKE_VALUE_FUNC(int, getCurrentYearFromService);

#include "SchedulerTestSuite.h"

extern "C" void schedulerInit();
extern "C" void schedulerTurnLEDSonOnTime();
extern "C" bool driverAreAllLEDsOn();

SUITE_TEST(SchedulerTestSuite, WhenYearIs2000_LightsAreOn)
{
	getCurrentYearFromService_fake.return_val = 2000;

	schedulerInit();
	schedulerTurnLEDSonOnTime();
	CHECK(driverAreAllLEDsOn());
}

SUITE_TEST(SchedulerTestSuite, WhenYearIs2018_LightsAreOff)
{
	getCurrentYearFromService_fake.return_val = 2018;

	schedulerInit();
	schedulerTurnLEDSonOnTime();
	CHECK(!driverAreAllLEDsOn());
}
