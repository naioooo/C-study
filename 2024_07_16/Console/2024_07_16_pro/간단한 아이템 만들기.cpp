#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

/*
과제2. 간단한 아이템 만들기

- 종류와 데미지 가격이 다른 무기와 방어구 5종 만들고 화면에 출력
- 출력된 화면에는 아이템 종류에 따른 가격 + 특성이 함께 나열
- 무기 1종 + 방어구 1종에는 반드시 도트를 적용해야한다
*/

void draw_bow_dot();
void draw_hat_dot();
void print_Rectangle(int cnt);
void TextColor(int font, int background);
void set_point(int x, int y);
void change_yellow();
void change_red();
void change_black();
void change_white();
void print_endl();

class weapon
{
public:
	string m_name;
	int m_damage;
	int m_price;
	string m_feature;
	bool m_dot;


	weapon(string name, int damage, int price, string feature, bool dot);

	void introduce_weapon();
};

weapon::weapon(string name, int damage, int price, string feature, bool dot)
{
	m_name = name;
	m_damage = damage;
	m_price = price;
	m_feature = feature;
	m_dot = dot;
}

void weapon::introduce_weapon()
{
	cout << endl;
	cout << "무기의 이름은 : " << m_name << "입니다 " << endl;
	cout << "무기의 데미지는 : " << m_damage << "입니다 " << endl;
	cout << "무기의 가격은 : " << m_price << "원 입니다 " << endl;
	cout << "무기의 특징은 : " << m_feature << "입니다 " << endl;
	if (m_dot)
	{
		draw_bow_dot();
	}
	cout << endl;
}


class armor
{
public:
	string m_name;
	int m_durability; //내구도
	int m_price;
	string m_feature;
	bool m_dot;

	armor(string name, int durability, int price, string feature, bool dot);

	void introduce_armor();
};

armor::armor(string name, int durability, int price, string feature, bool dot)
{
	m_name = name;
	m_durability = durability;
	m_price = price;
	m_feature = feature;
	m_dot = dot;
}

void armor::introduce_armor()
{
	cout << endl;
	cout << "방어구의 이름은 : " << m_name << "입니다 " << endl;
	cout << "방어구의 내구도는 : " << m_durability << "입니다 " << endl;
	cout << "방어구의 가격은 : " << m_price << "원 입니다 " << endl;
	cout << "방어구의 특징은 : " << m_feature << "입니다 " << endl;
	if (m_dot)
	{
		draw_hat_dot();
	}
	cout << endl;
}

int main()
{
	weapon bow("bow", 20, 4000, "장거리 공격이 가능한 활", true);
	weapon snife("snife", 50, 3000, "짧지만 빠른 공속을 가진 단검", false);
	weapon axe("axe", 80, 3500, "공속이 느리지만 강력한 한방을 가진 도끼", false);
	weapon gun("gun", 30, 5000, "원거리 공격으로 적을 관통하는 총", false);
	weapon pan("pan", 10, 1000, "형편없는 후라이팬", false);

	armor hat("hat", 30, 2000, "머리를 보호해주는 모자", true);
	armor glove("glove", 40, 2500, "강력한 악력을 갖게 해주는 장갑", false);
	armor shoes("shoes", 10, 2500, "빠른 발을 만들어 주는 신발", false);
	armor pants("pants", 60, 4000, "비브라늄으로 만든 단단한 바지", false);
	armor tee("tee", 80, 4500, "갑판을 둘러 방탄이 되는 티셔츠", false);

	while (true)
	{
		cout << "설명을 듣고 싶은 무기나 방어구의 번호를 적으시오" << endl;
		cout << "1. " << bow.m_name << " 2. " << snife.m_name << " 3. " << axe.m_name << " 4. " << gun.m_name << " 5. " << pan.m_name
			<< " 6. " << hat.m_name << " 7. " << glove.m_name << " 8. " << shoes.m_name << " 9. " << pants.m_name << " 10. " << tee.m_name << endl;

		cout << endl;
		int input;
		cin >> input;
		cout << endl;

		switch (input)
		{
		case 1:
			bow.introduce_weapon();
			break;
		case 2:
			snife.introduce_weapon();
			break;
		case 3:
			axe.introduce_weapon();
			break;
		case 4:
			gun.introduce_weapon();
			break;
		case 5:
			pan.introduce_weapon();
			break;
		case 6:
			hat.introduce_armor();
			break;
		case 7:
			glove.introduce_armor();
			break;
		case 8:
			shoes.introduce_armor();
			break;
		case 9:
			pants.introduce_armor();
			break;
		case 10:
			tee.introduce_armor();
			break;
		}

		cout << endl;
	}

	return 0;
}

void draw_bow_dot()
{

	cout << endl;

	//
	change_white();
	print_Rectangle(10);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(8);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(1);
	change_white();
	print_Rectangle(7);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(6);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(1);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(5);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(2);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(4);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(3);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(3);
	print_endl();
	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(3);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(3);
	print_endl();
	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(3);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(3);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(2);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(4);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(1);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(5);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(6);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_red();
	print_Rectangle(1);
	change_white();
	print_Rectangle(7);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(1);
	change_white();
	print_Rectangle(8);
	print_endl();

	//
	change_white();
	print_Rectangle(10);
	print_endl();

	TextColor(15, 0);
	cout << endl;

}

void draw_hat_dot()
{
	cout << endl;

	//
	change_white();
	print_Rectangle(10);
	print_endl();

	//
	change_white();
	print_Rectangle(10);
	print_endl();

	//
	change_white();
	print_Rectangle(4);
	change_red();
	print_Rectangle(2);
	change_white();
	print_Rectangle(4);
	print_endl();

	//
	change_white();
	print_Rectangle(2);
	change_yellow();
	print_Rectangle(6);
	change_white();
	print_Rectangle(2);
	print_endl();

	//
	change_white();
	print_Rectangle(2);
	change_yellow();
	print_Rectangle(6);
	change_white();
	print_Rectangle(2);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_yellow();
	print_Rectangle(8);
	change_white();
	print_Rectangle(1);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(8);
	change_white();
	print_Rectangle(1);
	print_endl();

	//
	change_white();
	print_Rectangle(1);
	change_black();
	print_Rectangle(8);
	change_white();
	print_Rectangle(1);
	print_endl();

	//
	change_white();
	print_Rectangle(10);
	print_endl();

	TextColor(15, 0);
	cout << endl;

}

void print_Rectangle(int cnt)
{
	cnt += cnt;
	for (int i = 0; i < cnt; i++)
		cout << "■";
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
void print_endl()
{
	change_black();
	cout << endl;
}
