#include "Mode.h"
#include "Console.h"
#include "Scene.h"
#include "Start.h"

void howtoplay()
{
	system("cls");

	// 첫번째 줄
	gotoxy(7, 1);
	printf("[게임 방법 설명]");
	gotoxy(7, 13);
	printf("이 게임은 방향키 또는 마우스 클릭으로 진행됩니다.");
	gotoxy(7, 17);
	printf("(다들 그 흔한 틀린그림찾기 알잖아요~~ 그럼 빨리 빼애애액해서 플레이하세요!!)");

	htpcursor();
}

void htpcursor()
{
	gotoxy(64, 22);
	printf("▶");
	gotoxy(68, 22);
	printf("돌아가기");
	getch();

	system("cls");

	logo();
	select();
}