#include "Console.h"
#include "Mode.h"
#include "Scene.h"
#include "InGame.h"

void stage1chk()
{
	char chkstr[] = "1 ���������� �÷����Ͻðڽ��ϱ�?";
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

	chk1();
	chkcursor1();
}

void chk1()
{
		gotoxy(41, 16);
		printf("���� ����");
		gotoxy(77, 16);
		printf("���ư���");
}

void chkcursor1()
{
	int chkcorsor;
	int i = 38;

	gotoxy(i, 16);
	printf("��");

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
				printf("��");
			}
			else if (chkcorsor == 13)
			{
				border1();
				stage1();
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
				printf("��");
			}
			else if (chkcorsor == 13)
			{
				gamestart();
				break;
			}
		}
	}
}