#include "Console.h"
#include "SetUp.h"

void running()
{
	int ch;
	ch = getch();

	if (ch == '`')
	{
		setup();
	}
}

void setup()
{
	system("cls");
}