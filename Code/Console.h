#ifndef _CONSOLE_H_ //중복 include 방지
#define _CONSOLE_H_

#include <Windows.h> // 윈도우 API
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void gotoxy(int x, int y); //커서 이동함수
COORD getCursorPos(); //커서 위치를 얻어오는 함수

typedef enum CursorType // 바꿀 커서의 타입
{
	CursorUnvisible, //커서숨기기
	CursorInput, //커서 입력모드
	CursorNormal //일반커서
}CursorType;

void setCursorType(CursorType type); //커서바꾸기
CursorType getCursorType(); //커서모양

// 색
typedef enum Color
{
	BLACK           = 0x0,	   // 검정색
	BLUE            = 0x1,	   // 파랑색
	GREEN           = 0x2,	   // 초록색
	SKYBLUE         = 0x3,	   // 옥색
	RED             = 0x4,	   // 빨간색
	PURPLE          = 0x5,	   // 자주색
	YELLOW          = 0x6,	   // 노랑색
	WHITE           = 0x7,	   // 흰색
	GRAY            = 0x8,	   // 회색
	LIGHTBLUE       = 0x9,	   // 연한 파랑색
	LIGHTGREEN      = 0xA,	   // 연한 초록색
	LIGHTSKYBLUE    = 0xB,	   // 연한 옥색
	LIGHTRED        = 0xC,	   // 연한 빨간색
	LIGHTPURPLE     = 0xD,	   // 연한 자주색
	LIGHTYELLOW     = 0xE,	   // 연한 노랑색
	BRIGHTWHITE     = 0xF,	   // 밝은 흰색
}Color;

void setTextColor(Color color); //텍스트 색변경
Color getTextColor(); // 텍스트 색 얻기
void setColor(int color);

void setBgColor(Color color); //배경색 변경
Color getBgColor(); //배경색 얻기

//콘솔 창 크기 변경 (몇 칸, 몇 줄)
void setConsoleSize(int cols, int lines);

void setTitle(const char *title); //타이틀 설정
//타이틀 얻기 (문자배열, 문자배열 크기)
void getTitle(char *out, int nSize);

void getMouse();

void MouseClick(int *a, int *b);

void mouse(int a, int b);

#endif // _CONSOLE_H_