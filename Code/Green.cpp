#include "Green.h"
#include "Console.h"

void batting()
{
	gotoxy(25, 5);
	printf("�� ����Ʈ�� �����Ͻðڽ��ϱ�?");

	point();
}

void point()
{
	int nowpoint = 250;
	int point = 0;
	int cs;

	while (1)
	{
		int i = 21;

		gotoxy(28, 10);
		printf("������ ����Ʈ : %d ����Ʈ", point);
		gotoxy(28, 12);
		printf("���� ����� ����Ʈ : %d ����Ʈ", nowpoint);
		gotoxy(28, 15);
		printf("�� �� �Ҹ��� �����ʴϱ�?");
		gotoxy(25, 18);
		printf("2��");
		gotoxy(40, 18);
		printf("3��");
		gotoxy(55, 18);
		printf("���ư���");

		gotoxy(i, 18);
		printf("��");

		cs = getch();
		if (cs == 72)
		{
			if (point >= 999)
			{
				point = 999;
			}
			else if (point >= nowpoint)
			{
				point = nowpoint;
			}
			else
			{
				point += 10;
			}
		}
		else if (cs == 80)
		{
			if (point <= 0)
			{
				point = 0;
			}
			else
			{
				point -= 10;
			}
		}
		else if (cs == 77)
		{
			gotoxy(i, 18);
			printf("  ");
			if (i == 51)
			{
				i -= 30;
			}
			else
			{
				i += 15;
			}
			gotoxy(i, 18);
			printf("��");
		}
		else if (cs == 75)
		{
			gotoxy(i, 18);
			printf("  ");
			if (i == 21)
			{
				i += 30;
			}
			else
			{
				i -= 15;
			}
			gotoxy(i, 18);
			printf("��");
		}
	}
}

void batte2(int a)
{

}

void batte3(int a)
{

}