/*
 * factorialtests.cpp
 *
 *  Created on: 2 ????? 2018
 *      Author: Gil
 */

#include "../../frameworks/yaffut.h"
extern "C" int factorial(int n);

TEST(Factorials)
{
	EQUAL (1, factorial(0));
	EQUAL (1, factorial(1));
	EQUAL (2, factorial(2));

}
