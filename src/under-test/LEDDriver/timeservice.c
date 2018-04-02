#include <time.h>
#include "common.h"

bool isInitialized = false;
int oneYear = 60*24*365;

void initalizeTimerService()
{
	isInitialized=true;
}

/*
int getCurrentYearFromService()
{

	if (isInitialized == true)
	{
		time_t t = time(NULL);
		struct tm* currenttime= localtime(&t);
		return (currenttime ->tm_year) + 1900;
	}
	else
		return 0;
}
*/

void getCurrentTimeByPtr(time_t* currentTime)
{
	if (isInitialized == true)
		*currentTime = time(NULL);
	else
		*currentTime = time(NULL) - oneYear;

}
