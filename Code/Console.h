#ifndef _CONSOLE_H_ //�ߺ� include ����
#define _CONSOLE_H_

#include <Windows.h> // ������ API
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void gotoxy(int x, int y); //Ŀ�� �̵��Լ�
COORD getCursorPos(); //Ŀ�� ��ġ�� ������ �Լ�

typedef enum CursorType // �ٲ� Ŀ���� Ÿ��
{
	CursorUnvisible, //Ŀ�������
	CursorInput, //Ŀ�� �Է¸��
	CursorNormal //�Ϲ�Ŀ��
}CursorType;

void setCursorType(CursorType type); //Ŀ���ٲٱ�
CursorType getCursorType(); //Ŀ�����

// ��
typedef enum Color
{
	BLACK           = 0x0,	   // ������
	BLUE            = 0x1,	   // �Ķ���
	GREEN           = 0x2,	   // �ʷϻ�
	SKYBLUE         = 0x3,	   // ����
	RED             = 0x4,	   // ������
	PURPLE          = 0x5,	   // ���ֻ�
	YELLOW          = 0x6,	   // �����
	WHITE           = 0x7,	   // ���
	GRAY            = 0x8,	   // ȸ��
	LIGHTBLUE       = 0x9,	   // ���� �Ķ���
	LIGHTGREEN      = 0xA,	   // ���� �ʷϻ�
	LIGHTSKYBLUE    = 0xB,	   // ���� ����
	LIGHTRED        = 0xC,	   // ���� ������
	LIGHTPURPLE     = 0xD,	   // ���� ���ֻ�
	LIGHTYELLOW     = 0xE,	   // ���� �����
	BRIGHTWHITE     = 0xF,	   // ���� ���
}Color;

void setTextColor(Color color); //�ؽ�Ʈ ������
Color getTextColor(); // �ؽ�Ʈ �� ���
void setColor(int color);

void setBgColor(Color color); //���� ����
Color getBgColor(); //���� ���

//�ܼ� â ũ�� ���� (�� ĭ, �� ��)
void setConsoleSize(int cols, int lines);

void setTitle(const char *title); //Ÿ��Ʋ ����
//Ÿ��Ʋ ��� (���ڹ迭, ���ڹ迭 ũ��)
void getTitle(char *out, int nSize);

void getMouse();

void MouseClick(int *a, int *b);

void mouse(int a, int b);

#endif // _CONSOLE_H_