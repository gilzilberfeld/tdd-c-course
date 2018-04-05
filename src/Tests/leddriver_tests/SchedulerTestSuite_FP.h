#ifndef TESTS_LEDDRIVER_TESTS_SCHEDULERTESTSUITE_FPSUITE_H_
#define TESTS_LEDDRIVER_TESTS_SCHEDULERTESTSUITE_FPSUITE_H_

extern "C" void schedulerInit();
extern "C" void schedulerTurnLEDSonOnTime();
extern "C" bool driverAreAllLEDsOn();
extern "C" int (*getCurrentYearFromServicePtr)();

class SchedulerTestSuite_FP{
public:
	int (*savedPtr)();

	SchedulerTestSuite_FP(){
		savedPtr = getCurrentYearFromServicePtr;
	}

	~SchedulerTestSuite_FP(){
		getCurrentYearFromServicePtr = savedPtr;
		savedPtr = 0;
	}
};

#endif
