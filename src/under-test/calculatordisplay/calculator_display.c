char display[10];

void initCalculator()
{
	strcpy (display,"0");
}


void pressKey(char key)
{
	if (key != '+')
	{
		if (strcmp(display,"0")!=0)
		{
			strcat(display, key);
		}
		else
			display[0] = key;
	}
}

char* getDisplayValue() {
	char* displayed = malloc(sizeof(display));
	strcpy (displayed, display);
	return displayed;
}

