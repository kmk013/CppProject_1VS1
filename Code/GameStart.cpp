#include "Console.h"
#include "Mode.h"

void gamestart()
{
	system("cls");

	setConsoleSize(125, 25);

	gotoxy(55, 2);
	printf("- SELECT STAGE - ");

	setColor(LIGHTRED * 16);
	for (int i = 5; i < 15; i++)
	{
		for (int j = 5; j < 15; j++)
		{
			gotoxy(i, j);
			printf(" ");
		}
	}

	setColor(LIGHTYELLOW * 16);
	for (int i = 31; i < 41; i++)
	{
		for (int j = 5; j < 15; j++)
		{
			gotoxy(i, j);
			printf(" ");
		}
	}

	setColor(LIGHTGREEN * 16);
	for (int i = 58; i < 68; i++)
	{
		for (int j = 5; j < 15; j++)
		{
			gotoxy(i, j);
			printf(" ");
		}
	}

	setColor(LIGHTBLUE * 16);
	for (int i = 84; i < 94; i++)
	{
		for (int j = 5; j < 15; j++)
		{
			gotoxy(i, j);
			printf(" ");
		}
	}

	setColor(LIGHTPURPLE * 16);
	for (int i = 110; i < 120; i++)
	{
		for (int j = 5; j < 15; j++)
		{
			gotoxy(i, j);
			printf(" ");
		}
	}

	setColor(BLACK * 16);
	startcursor();

}

void startcursor()
{
	setTextColor(BRIGHTWHITE);

	int i = 8;
	int cs;
	int *chk;

	gotoxy(i, 18);
	printf("▣▣");
	gotoxy(i, 19);
	printf("▣▣");

	stagetext();

	while (1)
	{
		cs = getch();

		gotoxy(i, 18);
		printf("    ");
		gotoxy(i, 19);
		printf("    ");

		// 1스테이지
		if (i == 8)
		{
			if (cs == 75)
			{
				i = 113;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 77)
			{
				i = 34;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 13)
			{
				stage1chk();
				break;
			}
		}

		// 2스테이지
		else if (i == 34)
		{
			if (cs == 75)
			{
				i = 8;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 77)
			{
				i = 61;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 13)
			{
				stage2chk();
				break;
			}
		}

		// 3스테이지
		else if (i == 61)
		{
			if (cs == 75)
			{
				i = 34;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 77)
			{
				i = 87;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 13)
			{
				stage3chk();
				break;
			}
		}

		// 4스테이지
		else if (i == 87)
		{
			if (cs == 75)
			{
				i = 61;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 77)
			{
				i = 113;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 13)
			{
				stage4chk();
				break;
			}
		}

		// 5스테이지
		else if (i == 113)
		{
			if (cs == 75)
			{
				i = 87;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 77)
			{
				i = 8;

				gotoxy(i, 18);
				printf("▣▣");
				gotoxy(i, 19);
				printf("▣▣");
			}
			else if (cs == 13)
			{
				stage5chk();
				break;
			}
		}
	}
}

void stagetext()
{
	gotoxy(7, 16);
	printf("STAGE 1");
	gotoxy(33, 16);
	printf("STAGE 2");
	gotoxy(60, 16);
	printf("STAGE 3");
	gotoxy(86, 16);
	printf("STAGE 4");
	gotoxy(112, 16);
	printf("STAGE 5");

	gotoxy(6, 21);
	printf("VERY EASY");
	gotoxy(34, 21);
	printf("EASY");
	gotoxy(60, 21);
	printf("NORMAL");
	gotoxy(87, 21);
	printf("HARD");
	gotoxy(111, 21);
	printf("VERY HARD");
}

int chkstage(int *chk) {
	int chkstage = *chk;
	return chkstage;
}