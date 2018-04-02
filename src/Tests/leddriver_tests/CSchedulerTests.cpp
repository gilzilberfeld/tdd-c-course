///*
// * CSchedulerTests.cpp
// *
// *  Created on: 18 ????? 2016
// *      Author: Gil
// */
//#include <gtest\gtest.h>
//#include "fff.h"
//
//DEFINE_FFF_GLOBALS;
//FAKE_VALUE_FUNC(int, getCurrentYearFromService);
//
//#include "CSchedulerTests.h"
//
//extern "C" void initScheduler();
//extern "C" void turnLEDSonOnTime();
//extern "C" bool areAllLEDSon();
//
//
//
//TEST_F(CSchedulerTests,WhenYearIs2000_LightsAreOn)
//{
//	getCurrentYearFromService_fake.return_val = 2000;
//	initScheduler();
//	turnLEDSonOnTime();
//	ASSERT_EQ(true, areAllLEDSon());
//}
//
//TEST_F(CSchedulerTests,WhenYearIs2015_LightsAreOff)
//{
//	getCurrentYearFromService_fake.return_val = 2015;
//
//	initScheduler();
//	turnLEDSonOnTime();
//	ASSERT_EQ(false, areAllLEDSon());
//}
