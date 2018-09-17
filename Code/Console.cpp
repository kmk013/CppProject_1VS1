#include "Console.h"

#include <stdio.h>

static CursorType cursorType; //Ŀ��Ÿ���� ������ ����

HANDLE getHandle(void) // �ܼ�â �ڵ��� ����
{
	return GetStdHandle(STD_OUTPUT_HANDLE);
}

void gotoxy(int x, int y) // Ŀ�� �̵�
{
	COORD dwCursorPosition = { x, y };
	SetConsoleCursorPosition(getHandle(), dwCursorPosition);
}

COORD getCursorPos() // Ŀ����ġ ����
{
	CONSOLE_SCREEN_BUFFER_INFO bufInfo;
	GetConsoleScreenBufferInfo(getHandle(), &bufInfo);
	return bufInfo.dwCursorPosition;
}

void setCursorType(CursorType type) // Ŀ��Ÿ�Լ���
{
	CONSOLE_CURSOR_INFO curInfo;
	switch (cursorType = type)
	{
	case CursorUnvisible: // �Ⱥ���
		curInfo.dwSize = 1;
		curInfo.bVisible = FALSE;
		break;

	case CursorInput: // �Է¸��
		curInfo.dwSize = 100;
		curInfo.bVisible = TRUE;
		break;

	case CursorNormal: // �Ϲ�
		curInfo.dwSize = 20;
		curInfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(getHandle(), &curInfo);
}

CursorType getCursorType() // Ŀ��Ÿ�� ���
{
	return cursorType;
}

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void setTextColor(Color color) // �ؽ�Ʈ�÷� ����
{
	SetConsoleTextAttribute(getHandle(), getBgColor() * 16 + color);
}

Color getTextColor() // �ؽ�Ʈ �÷� ���
{
	CONSOLE_SCREEN_BUFFER_INFO bufInfo;
	GetConsoleScreenBufferInfo(getHandle(), &bufInfo);
	return (Color)(bufInfo.wAttributes % 16);
}

void setBgColor(Color color) // ��� �� ����
{
	SetConsoleTextAttribute(getHandle(), color * 16 + getTextColor());
}

Color getBgColor(void) // ��� �� ���
{
	CONSOLE_SCREEN_BUFFER_INFO bufInfo = { 0, };
	GetConsoleScreenBufferInfo(getHandle(), &bufInfo);
	return (Color)(bufInfo.wAttributes / 16);
}

void setConsoleSize(int cols, int lines) // �ܼ� â ũ�� ����
{
	char buf[255] = { 0, };
	sprintf(buf, "mode con cols=%d lines=%d", cols, lines);
	system(buf);
}

void setTitle(const char *title) // Ÿ��Ʋ����
{
	SetConsoleTitleA(title);
	//A�� ��Ƽ����Ʈ ����(ANSI)
	//W�� �����ڵ� ����(WIDE)
}

void getTitle(char *out, int nSize) // Ÿ��Ʋ���
{
	GetConsoleTitleA(out, nSize);
}

void getMouse()
{
	if (GetKeyState(VK_LBUTTON & 0x8000))
	{
		
	}
}

void MouseClick(int *a, int *b) {
	HANDLE hln, hOut;
	DWORD dwNOER;
	INPUT_RECORD rec;

	hln = GetStdHandle(STD_INPUT_HANDLE);
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleMode(hln, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);

	while (TRUE) {
		ReadConsoleInput(hln, &rec, 1, &dwNOER);

		if (rec.EventType == MOUSE_EVENT) {
			if (rec.EventType == MOUSE_EVENT) {
				*a = rec.Event.MouseEvent.dwMousePosition.X;
				*b = rec.Event.MouseEvent.dwMousePosition.Y;
				return;
			}
		}
	}
}

void mouse(int a, int b) {
	int o, p;

	while (1) {
		MouseClick(&a, &b);
		gotoxy(a, b);
		o = a;
		p = b;
		break;
	}
}