#include <iostream>
#include <windows.h>

using namespace std;

void print_black(int cnt)
{
	cnt += cnt;
	for(int i = 0; i < cnt; i++)
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

void set_point(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	// 피카츄 그리기
	int y_pos = 3;

	set_point(0, y_pos++);
	print_empty(40);

	//
	set_point(0, y_pos++);
	print_empty(16);
	print_black(8);
	print_empty(16);
	print_endl();

	//
	set_point(0, y_pos++);
	print_empty(13);
	print_black(3);
	print_empty(8);
	print_black(3);
	print_empty(13);
	print_endl();

	//
	set_point(0, y_pos++);
	print_empty(8);
	print_black(4);
	print_empty(16);
	print_black(4);
	print_empty(8);
	print_endl();

	//
	set_point(0, y_pos++);
	print_empty(8);
	print_black(4);
	print_empty(16);
	print_black(4);
	print_empty(8);
	print_endl();

	//
	set_point(0, y_pos++);
	print_empty(6);
	print_black(2);
	print_empty(24);
	print_black(2);
	print_empty(6);
	print_endl();

	//
	set_point(0, y_pos++);
	print_empty(4);
	print_black(2);
	print_empty(28);
	print_black(2);
	print_empty(4);
	print_endl();

	//
	set_point(0, y_pos++);
	print_empty(3);
	print_black(1);
	print_empty(5);
	print_black(1);
	print_empty(20);
	print_black(1);
	print_empty(5);
	print_black(1);
	print_empty(3);
	print_endl();

	//
	set_point(0, y_pos++);
	print_empty(2);
	print_black(2);
	print_empty(5);
	print_black(1);

	print_empty(3);
	print_black(2);
	print_empty(10);
	print_black(2);
	print_empty(3);

	print_black(1);
	print_empty(5);
	print_black(2);
	print_empty(2);
	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(1);
	print_black(4);
	print_empty(2);
	print_black(2);

	print_empty(2);
	print_black(2);
	print_empty(6);
	print_black(2);
	print_empty(6);
	print_black(2);
	print_empty(2);

	print_black(2);
	print_empty(2);
	print_black(4);
	print_empty(1);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(1);
	print_black(7);
	print_empty(1);
	print_black(1);

	print_empty(20);

	print_black(1);
	print_empty(1);
	print_black(7);
	print_empty(1);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(9);
	print_black(1);

	print_empty(20);

	print_black(1);
	print_empty(9);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(9);
	print_black(4);
	print_empty(9);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(2);
	print_black(2);

	print_empty(4);
	print_black(6);
	print_empty(4);

	print_black(2);
	print_empty(2);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(1);
	print_black(4);

	print_empty(3);
	print_black(1);
	print_empty(4);
	print_black(1);
	print_empty(3);

	print_black(4);
	print_empty(1);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(1);
	print_black(4);

	print_empty(3);
	print_black(1);
	print_empty(4);
	print_black(1);
	print_empty(3);

	print_black(4);
	print_empty(1);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(2);
	print_black(2);

	print_empty(4);
	print_black(1);
	print_empty(4);
	print_black(3);
	print_empty(2);

	print_black(2);
	print_empty(2);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(9);
	print_black(4);
	print_empty(2);
	print_black(1);
	print_empty(6);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(9);
	print_black(1);

	print_empty(12);
	print_black(1);
	print_empty(3);
	print_black(1);
	print_empty(3);

	print_black(1);
	print_empty(9);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(9);
	print_black(1);

	print_empty(13);
	print_black(1);
	print_empty(3);
	print_black(1);
	print_empty(2);

	print_black(1);
	print_empty(9);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(9);
	print_black(2);

	print_empty(13);
	print_black(1);
	print_empty(3);
	print_black(2);

	print_black(1);
	print_empty(9);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(9);
	print_black(1);

	print_empty(7);
	print_black(6);
	print_empty(1);
	print_black(1);
	print_empty(3);
	print_black(1);
	print_empty(1);

	print_black(1);
	print_empty(9);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(9);
	print_black(1);

	print_empty(8);
	print_black(4);
	print_empty(3);
	print_black(1);
	print_empty(4);

	print_black(1);
	print_empty(9);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(9);
	print_black(1);

	print_empty(15);
	print_black(1);
	print_empty(4);

	print_black(1);
	print_empty(9);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(22);

	print_black(1);
	print_empty(8);

	print_endl();
	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(22);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(22);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(22);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);

	print_empty(8);
	print_black(1);

	print_empty(22);

	print_black(1);
	print_empty(8);

	print_endl();

	//
	set_point(0, y_pos++);
	print_empty(40);
	return 0;
}