char display[10];

void init()
{
	strcpy (display,"0");
}

void Press(char key)
{
	if (key != '+')
	{
		if (strcmp(display,"0")!=0)
		{
			strcat(display, key);
		}
		else
			strcpy(display, key);
	}
}


