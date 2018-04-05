#ifndef TESTS_LEDDRIVER_TESTS_SCHEDULERTESTSUITE_FFF_H_
#define TESTS_LEDDRIVER_TESTS_SCHEDULERTESTSUITE_FFF_H_

extern "C" void schedulerInit();
extern "C" void schedulerTurnLEDSonOnTime();
extern "C" bool driverAreAllLEDsOn();

class SchedulerTestSuite {
public:
	SchedulerTestSuite(){
		// Setup
	}

	~SchedulerTestSuite(){
		// Teardown
		RESET_FAKE(getCurrentYearFromService);
	}
};

#endif
