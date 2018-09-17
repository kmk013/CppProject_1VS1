#include "Start.h"
#include "Console.h"
#include "Mode.h"
#include "Scene.h"
#include "Red.h"
#include "Green.h"

void logo() // 게임 제목
{
	setColor(BRIGHTWHITE * 16);
	for (int i = 1; i < 11; i++)
	{
		gotoxy(4, i);
		printf("                                                                           ");
		Sleep(50);
	}

	setColor(LIGHTBLUE * 16);
	
	gotoxy(20, 2);
	printf("  ");
	gotoxy(20, 3);
	printf("  ");
	gotoxy(20, 4);
	printf("  ");
	gotoxy(20, 5);
	printf("  ");
	gotoxy(20, 6);
	printf("  ");
	gotoxy(20, 7);
	printf("  ");
	gotoxy(20, 8);
	printf("  ");
	gotoxy(20, 9);
	printf("  ");

	gotoxy(40, 2);
	printf("  ");
	gotoxy(40, 3);
	printf("  ");
	gotoxy(40, 8);
	printf("  ");
	gotoxy(40, 9);
	printf("  ");

	gotoxy(60, 2);
	printf("  ");
	gotoxy(60, 3);
	printf("  ");
	gotoxy(60, 4);
	printf("  ");
	gotoxy(60, 5);
	printf("  ");
	gotoxy(60, 6);
	printf("  ");
	gotoxy(60, 7);
	printf("  ");
	gotoxy(60, 8);
	printf("  ");
	gotoxy(60, 9);
	printf("  ");

	setColor(BLACK * 16);
}

void select() // 게임 진행 선택화면
{
	setTextColor(BRIGHTWHITE);
	gotoxy(37, 15);
	printf("GAME START");

	gotoxy(37, 17);
	printf("HOW TO PLAY");

	gotoxy(37, 19);
	printf("GAME END");

	maincursor();
}

void maincursor() // 게임 모드 선택
{
	int y = 15;
	int cs;
	
	gotoxy(33, y);
	printf("▣");

	while (1)
	{
		cs = getch();
		if (y == 15) // 게임 시작 메뉴
		{
			if (cs == 72)
			{
				gotoxy(33, y);
				printf(" ");
				y += 4;
				gotoxy(33, y);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(33, y);
				printf(" ");
				y += 2;
				gotoxy(33, y);
				printf("▣");
			}
			else if (cs == 13)
			{
				gamestart();
				break;
			}
		}
		else if (y == 17) // 게임 방법 메뉴
		{
			if (cs == 72)
			{
				gotoxy(33, y);
				printf(" ");
				y -= 2;
				gotoxy(33, y);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(33, y);
				printf(" ");
				y += 2;
				gotoxy(33, y);
				printf("▣");
			}
			else if (cs == 13)
			{
				howtoplay();
				break;
			}
		}
		else if (y == 19) // 게임 끝내기 메뉴
		{
			if (cs == 72)
			{
				gotoxy(33, y);
				printf(" ");
				y -= 2;
				gotoxy(33, y);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(33, y);
				printf(" ");
				y -= 4;
				gotoxy(33, y);
				printf("▣");
			}
			else if (cs == 13)
			{
				exit(1);
			}
		}
	}
}

void asdf()
{
	setColor(RED * 16);
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 41; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	setColor(BLUE * 16);
	for (int i = 0; i < 14; i++)
	{
		for (int j = 43; j < 83; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	setColor(GREEN * 16);
	for (int i = 15; i < 25; i++)
	{
		for (int j = 0; j < 83; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	setColor(LIGHTRED * 16);
	for (int i = 3; i < 10; i++)
	{
		for (int j = 9; j < 30; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	setColor(LIGHTBLUE * 16);
	for (int i = 3; i < 10; i++)
	{
		for (int j = 52; j < 73; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	setColor(LIGHTGREEN * 16);
	for (int i = 20; i < 25; i++)
	{
		for (int j = 21; j < 62; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	setColor(BLACK * 16);
	setTextColor(BRIGHTWHITE);
}