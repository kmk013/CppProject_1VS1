#include "Console.h"
#include "Red.h"
#include "Scene.h"

void sred()
{
	setConsoleSize(30, 7);

	gotoxy(1, 1);
	printf("광부가 일을 하고 있습니다~~!");
	while (1)
	{
		int gold = 0;
		int cs;

		gotoxy(1, 3);
		printf("%d gold", gold);
		gotoxy(20, 5);
		printf("상점으로~");

		Sleep(1000);
		gold += 10;

		if (cs == 27)
		{
			smain();
		}
		else if (cs == 13)
		{
			store();
		}
	}
}

void store()
{
}