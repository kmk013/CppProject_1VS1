#include "Mode.h"
#include "Console.h"
#include "Scene.h"
#include "Start.h"

void howtoplay()
{
	system("cls");

	// ù��° ��
	gotoxy(7, 1);
	printf("[���� ��� ����]");
	gotoxy(7, 13);
	printf("�� ������ ����Ű �Ǵ� ���콺 Ŭ������ ����˴ϴ�.");
	gotoxy(7, 17);
	printf("(�ٵ� �� ���� Ʋ���׸�ã�� ���ݾƿ�~~ �׷� ���� ���־־��ؼ� �÷����ϼ���!!)");

	htpcursor();
}

void htpcursor()
{
	gotoxy(64, 22);
	printf("��");
	gotoxy(68, 22);
	printf("���ư���");
	getch();

	system("cls");

	logo();
	select();
}