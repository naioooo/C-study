#include <iostream>
#include <windows.h>

using namespace std;

#define BLACK 0;
#define RED 4;
#define YELLOW 14;


void print_Rectangle(int cnt);
void print_empty(int cnt);
void print_endl();
void TextColor(int font, int background);
void set_point(int x, int y);

/*
과제1 좋아하는 캐릭터 출력

- 컬러풀하게 출력
- 50 x 50
*/

void change_yellow()
{
	TextColor(14, 14);
}

void change_red()
{
	TextColor(4, 4);
}
void change_black()
{
	TextColor(0, 0);
}
void change_white()
{
	TextColor(15, 15);
}


int main()
{
	int y_pos = 0;
	int x_mul = 2;

	TextColor(0, 15);
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			cout << endl;
		}
		cout << endl;
	}


	change_black();
	y_pos = 4;
	set_point(6 * x_mul, y_pos++);
	print_Rectangle(6);

	//
	set_point(5 * x_mul, y_pos++);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(6);
	change_black();
	print_Rectangle(1);

	//
	set_point(4 * x_mul, y_pos++);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(8);
	change_black();
	print_Rectangle(1);

	//
	set_point(4 * x_mul, y_pos++);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(3);
	change_black();
	print_Rectangle(2);
	change_red();
	print_Rectangle(3);
	change_black();
	print_Rectangle(1);

	//
	set_point(3 * x_mul, y_pos++);
	change_black();
	print_Rectangle(2);
	change_red();
	print_Rectangle(2);
	change_black();
	print_Rectangle(4);
	change_red();
	print_Rectangle(2);
	change_black();
	print_Rectangle(2);

	//
	set_point(3 * x_mul, y_pos++);
	change_black();
	print_Rectangle(4);
	change_red();
	print_Rectangle(4);
	change_black();
	print_Rectangle(4);

	//
	set_point(2 * x_mul, y_pos++);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(8);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);

	//
	set_point(2 * x_mul, y_pos++);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(4);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(4);
	change_black();
	print_Rectangle(1);

	//
	set_point(3 * x_mul, y_pos++);
	change_black();
	print_Rectangle(2);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(2);

	//
	set_point(4 * x_mul, y_pos++);
	change_black();
	print_Rectangle(2);
	change_yellow();
	print_Rectangle(2);
	change_red();
	print_Rectangle(2);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(2);

	//
	set_point(3 * x_mul, y_pos++);
	change_black();
	print_Rectangle(2);
	change_yellow();
	print_Rectangle(1);
	change_red();
	print_Rectangle(1);
	change_black();
	print_Rectangle(4);
	change_red();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(1);
	change_black();
	print_Rectangle(2);

	//
	set_point(2 * x_mul, y_pos++);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(2);
	change_red();
	print_Rectangle(2);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);

	//
	set_point(2 * x_mul, y_pos++);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(2);
	change_yellow();
	print_Rectangle(2);
	change_red();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);

	//
	set_point(3 * x_mul, y_pos++);
	change_black();
	print_Rectangle(12);

	//
	set_point(4 * x_mul, y_pos++);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(2);
	change_black();
	print_Rectangle(4);
	change_red();
	print_Rectangle(2);
	change_black();
	print_Rectangle(1);

	//
	set_point(5 * x_mul, y_pos++);
	change_black();
	print_Rectangle(3);
	change_white();
	print_Rectangle(2);
	change_black();
	print_Rectangle(3);

	//
	set_point(6 * x_mul, y_pos++);
	change_black();
	print_Rectangle(6);


	TextColor(0, 15);
	return 0;
}





void print_Rectangle(int cnt)
{
	cnt += cnt;
	for (int i = 0; i < cnt; i++)
		cout << "■";
}
void print_empty(int cnt)
{
	cnt += cnt;
	for (int i = 0; i < cnt; i++)
		cout << "□";
}
void print_endl()
{
	cout << endl;
}
void TextColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void set_point(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}