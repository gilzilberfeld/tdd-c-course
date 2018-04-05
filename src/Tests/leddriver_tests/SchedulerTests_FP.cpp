#include "../../frameworks/yaffut.h"

#include "SchedulerTestSuite_FP.h"

int returnOlderYear() {return 2000;}
int returnCurrentYear() {return 2018;}


SUITE_TEST(SchedulerTestSuite_FP, WhenYearIs2000_LightsAreOn_FP)
{

	getCurrentYearFromServicePtr = returnOlderYear;

	schedulerInit();
	schedulerTurnLEDSonOnTime();
	CHECK(driverAreAllLEDsOn());
}

SUITE_TEST(SchedulerTestSuite_FP, WhenYearIs2018_LightsAreOff_FP)
{
	getCurrentYearFromServicePtr = returnCurrentYear;

	schedulerInit();
	schedulerTurnLEDSonOnTime();
	CHECK(!driverAreAllLEDsOn());
}





