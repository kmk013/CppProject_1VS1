#include "Console.h"
#include "Mode.h"
#include "Scene.h"
#include "InGame.h"

void stage4chk()
{
	char chkstr[] = "4 스테이지를 플레이하시겠습니까?";
	system("cls");

	gotoxy(47, 7);
	for (int i = 0; i < 34; i++)
	{
		Sleep(50);
		printf("%c", chkstr[i]);
		if (chkstr[i] == '?')
		{
			break;
		}
	}

	chk4();
	chkcursor4();
}

void chk4()
{
	gotoxy(41, 16);
	printf("게임 시작");
	gotoxy(77, 16);
	printf("돌아가기");
}

void chkcursor4()
{
	int chkcorsor;
	int i = 38;

	gotoxy(i, 16);
	printf("▶");

	while (1)
	{
		chkcorsor = getch();
		if (i == 38)
		{
			if (chkcorsor == 75 || chkcorsor == 77)
			{
				gotoxy(i, 16);
				printf(" ");
				i += 36;
				gotoxy(i, 16);
				printf("▶");
			}
			else if (chkcorsor == 13)
			{
				border4();
				stage4();
				break;
			}
		}
		else if (i == 74)
		{
			if (chkcorsor == 75 || chkcorsor == 77)
			{
				gotoxy(i, 16);
				printf(" ");
				i -= 36;
				gotoxy(i, 16);
				printf("▶");
			}
			else if (chkcorsor == 13)
			{
				gamestart();
				break;
			}
		}
	}
}