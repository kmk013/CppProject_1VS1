#include "Scene.h"
#include "Console.h"
#include "Mode.h"
#include "Resource.h"
#include "Start.h"
#include "InGame.h"

void smain()
{
	system("cls");
	setConsoleSize(83, 25);
	logo();
	select();
}

void spause()
{
	system("cls");
	gotoxy(68, 3);
	printf("- Game Pause -");
	gotoxy(70, 6);
	printf("Back To Game");
	gotoxy(70, 11);
	printf("Go To Main");
	gotoxy(70, 16);
	printf("Game End");
	pause1cursor();
}

void sstart()
{
	gamestart();
	stagetext();
}

void showtoplay()
{
	howtoplay();
}