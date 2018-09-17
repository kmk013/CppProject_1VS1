#include "Console.h"

#include <stdio.h>

static CursorType cursorType; //커서타입을 저장할 변수

HANDLE getHandle(void) // 콘솔창 핸들을 얻음
{
	return GetStdHandle(STD_OUTPUT_HANDLE);
}

void gotoxy(int x, int y) // 커서 이동
{
	COORD dwCursorPosition = { x, y };
	SetConsoleCursorPosition(getHandle(), dwCursorPosition);
}

COORD getCursorPos() // 커서위치 얻음
{
	CONSOLE_SCREEN_BUFFER_INFO bufInfo;
	GetConsoleScreenBufferInfo(getHandle(), &bufInfo);
	return bufInfo.dwCursorPosition;
}

void setCursorType(CursorType type) // 커서타입설정
{
	CONSOLE_CURSOR_INFO curInfo;
	switch (cursorType = type)
	{
	case CursorUnvisible: // 안보임
		curInfo.dwSize = 1;
		curInfo.bVisible = FALSE;
		break;

	case CursorInput: // 입력모드
		curInfo.dwSize = 100;
		curInfo.bVisible = TRUE;
		break;

	case CursorNormal: // 일반
		curInfo.dwSize = 20;
		curInfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(getHandle(), &curInfo);
}

CursorType getCursorType() // 커서타입 얻기
{
	return cursorType;
}

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void setTextColor(Color color) // 텍스트컬러 지정
{
	SetConsoleTextAttribute(getHandle(), getBgColor() * 16 + color);
}

Color getTextColor() // 텍스트 컬러 얻기
{
	CONSOLE_SCREEN_BUFFER_INFO bufInfo;
	GetConsoleScreenBufferInfo(getHandle(), &bufInfo);
	return (Color)(bufInfo.wAttributes % 16);
}

void setBgColor(Color color) // 배경 색 설정
{
	SetConsoleTextAttribute(getHandle(), color * 16 + getTextColor());
}

Color getBgColor(void) // 배경 색 얻기
{
	CONSOLE_SCREEN_BUFFER_INFO bufInfo = { 0, };
	GetConsoleScreenBufferInfo(getHandle(), &bufInfo);
	return (Color)(bufInfo.wAttributes / 16);
}

void setConsoleSize(int cols, int lines) // 콘솔 창 크기 변경
{
	char buf[255] = { 0, };
	sprintf(buf, "mode con cols=%d lines=%d", cols, lines);
	system(buf);
}

void setTitle(const char *title) // 타이틀설정
{
	SetConsoleTitleA(title);
	//A가 멀티바이트 문자(ANSI)
	//W가 유니코드 문자(WIDE)
}

void getTitle(char *out, int nSize) // 타이틀얻기
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