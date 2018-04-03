/*
 * SchedulerTestSuite.h
 *
 *  Created on: 3 ????? 2018
 *      Author: Gil
 */

#ifndef TESTS_LEDDRIVER_TESTS_SCHEDULERTESTSUITE_H_
#define TESTS_LEDDRIVER_TESTS_SCHEDULERTESTSUITE_H_

class SchedulerTestSuite {
public:
	SchedulerTestSuite(){
		// Setup
		RESET_FAKE(getCurrentYearFromService);
	}

	~SchedulerTestSuite(){
		// Teardown
	}
};

#endif /* TESTS_LEDDRIVER_TESTS_SCHEDULERTESTSUITE_H_ */
