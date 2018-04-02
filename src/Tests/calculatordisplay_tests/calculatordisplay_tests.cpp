#include "../../frameworks/yaffut.h"
extern "C" void initCalculator();
extern "C" void pressKey(char key);
extern "C" char* getDisplayValue();

TEST(displayShowsZeroAtStart)
{
	initCalculator();
	char* result = getDisplayValue();
	std::string display(result);
	EQUAL("0", display);
	free(result);
}


TEST(OnPress1_Display_1)
{
	initCalculator();
	pressKey('1');
	char* result = getDisplayValue();
	std::string display(result);
	EQUAL("1", display);
	free(result);
}
