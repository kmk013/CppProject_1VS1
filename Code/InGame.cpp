#include "Console.h"
#include "InGame.h"
#include "Scene.h"
#include "Mode.h"

void border1()
{
	system("cls");
	setConsoleSize(150, 21);

	setColor(BRIGHTWHITE * 16);
	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 126; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	stage1();
	keyboard1();
}

void success()
{
	setConsoleSize(125, 25);
	gotoxy(55, 7);
	printf("- STAGE CLEAR -");

	getch();
}

void fail()
{
	setConsoleSize(125, 25);
	gotoxy(62, 12);
	printf("- STAGE FAILED -");

	getch();
}

void pause()
{
	int chk;

	setColor(GRAY * 16);
	setTextColor(BRIGHTWHITE);

	for (int i = 15; i < 18; i++)
	{
		gotoxy(134, i);
		printf("        ");
	}
	gotoxy(134, 16);
	printf("일시정지");

	chk = getch();

	setColor(BLACK * 16);
	setTextColor(BRIGHTWHITE);

	if (chk == 27)
	{
		spause();
	}
}

void timelimit()
{
	int time = 10;

	gotoxy(134, 10);
	printf("남은 기회");
	gotoxy(136, 11);
	printf("%d", time);
		
	if (time == 0)
	{
		fail();
	}
}

void border2()
{
	system("cls");
	setConsoleSize(150, 21);

	setColor(BRIGHTWHITE * 16);
	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 126; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	stage2();
	pause();
}

void border3()
{
	system("cls");
	setConsoleSize(150, 21);

	setColor(BRIGHTWHITE * 16);
	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 126; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	stage3();
	pause();
}

void border4()
{
	system("cls");
	setConsoleSize(150, 21);

	setColor(BRIGHTWHITE * 16);
	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 126; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	stage4();
	pause();
}

void border5()
{
	system("cls");
	setConsoleSize(150, 21);

	setColor(BRIGHTWHITE * 16);
	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 126; j++)
		{
			gotoxy(j, i);
			printf(" ");
		}
	}

	stage5();
	pause();
}

void pause1cursor()
{
	int i = 6;
	int cs;

	while (1)
	{
		cs = getch();
		if (i == 6)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i += 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				border1();
			}
		}

		else if (i == 11)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				smain();
			}
		}

		else if (i == 16)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				exit(0);
			}
		}
	}
}

void pause2cursor()
{
	int i = 6;
	int cs;

	while (1)
	{
		cs = getch();
		if (i == 6)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i += 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				border2();
			}
		}

		else if (i == 11)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				smain();
			}
		}

		else if (i == 16)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				exit(0);
			}
		}
	}
}

void pause3cursor()
{
	int i = 6;
	int cs;

	while (1)
	{
		cs = getch();
		if (i == 6)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i += 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				border3();
			}
		}

		else if (i == 11)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				smain();
			}
		}

		else if (i == 16)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				exit(0);
			}
		}
	}
}

void pause4cursor()
{
	int i = 6;
	int cs;

	while (1)
	{
		cs = getch();
		if (i == 6)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i += 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				border4();
			}
		}

		else if (i == 11)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				smain();
			}
		}

		else if (i == 16)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				exit(0);
			}
		}
	}
}

void pause5cursor()
{
	int i = 6;
	int cs;

	while (1)
	{
		cs = getch();
		if (i == 6)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i += 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				border5();
			}
		}

		else if (i == 11)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i += 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				smain();
			}
		}

		else if (i == 16)
		{
			gotoxy(66, i);
			printf("▣");
			if (cs == 72)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 5;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 80)
			{
				gotoxy(66, i);
				printf(" ");
				i -= 10;
				gotoxy(66, i);
				printf("▣");
			}
			else if (cs == 13)
			{
				exit(0);
			}
		}
	}
}

void keyboard1()
{
	setCursorType(CursorNormal);

	int i = 1;
	int j = 1;
	int cs;
	int time = 10;
	int correct = 4;

	gotoxy(134, 7);
	printf("남은 기회");

	setColor(GRAY * 16);
	setTextColor(BRIGHTWHITE);

	for (int i = 15; i < 18; i++)
	{
		gotoxy(134, i);
		printf("        ");
	}
	gotoxy(134, 16);
	printf("일시정지");

	setColor(BLACK * 16);
	setTextColor(BRIGHTWHITE);
	
	while (1)
	{
		
		gotoxy(137, 8);
		if (time != 10)
		{
			printf("%d번", time % 10);
		}
		else
		{
			printf("%d번", time);
		}

		gotoxy(134, 10);
		printf("남은 정답");
		gotoxy(137, 11);
		printf("%d개", correct);

		gotoxy(i, j);

		if (time == 0)
		{
			fail();
			break;
		}

		cs = getch();
		if (cs == 75) // 왼쪽
		{
			i--;
			if (i <= 1)
			{
				i++;
			}
			gotoxy(i, j);
		}
		else if (cs == 77) // 오른쪽
		{
			i++;
			if (i >= 125)
			{
				i--;
			}
			gotoxy(i, j);
		}
		else if (cs == 80) // 위쪽
		{
			j++;
			if (j < 1)
			{
				j--;
			}
			gotoxy(i, j);
		}
		else if (cs == 72) // 아래쪽
		{
			j--;
			if (j > 20)
			{
				j++;
			}
			gotoxy(i, j);
		}
		else if (cs == 13)
		{
			stage1tmp(i, j, correct);
			time--;
		}
		else if (cs == 27)
		{
			spause();
			break;
		}
	}
}

void wrong1()
{
	gotoxy(133, 4);
	printf("틀렸습니다.");
	Sleep(1000);
	gotoxy(133, 4);
	printf("           ");
}

int correct1(int correct)
{
	gotoxy(135, 4);
	printf("정답~~!");
	Sleep(1000);
	gotoxy(133, 4);
	printf("         ");
	
	return correct--;
}