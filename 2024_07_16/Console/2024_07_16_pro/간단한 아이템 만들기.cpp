#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

/*
����2. ������ ������ �����

- ������ ������ ������ �ٸ� ����� �� 5�� ����� ȭ�鿡 ���
- ��µ� ȭ�鿡�� ������ ������ ���� ���� + Ư���� �Բ� ����
- ���� 1�� + �� 1������ �ݵ�� ��Ʈ�� �����ؾ��Ѵ�
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
	cout << "������ �̸��� : " << m_name << "�Դϴ� " << endl;
	cout << "������ �������� : " << m_damage << "�Դϴ� " << endl;
	cout << "������ ������ : " << m_price << "�� �Դϴ� " << endl;
	cout << "������ Ư¡�� : " << m_feature << "�Դϴ� " << endl;
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
	int m_durability; //������
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
	cout << "���� �̸��� : " << m_name << "�Դϴ� " << endl;
	cout << "���� �������� : " << m_durability << "�Դϴ� " << endl;
	cout << "���� ������ : " << m_price << "�� �Դϴ� " << endl;
	cout << "���� Ư¡�� : " << m_feature << "�Դϴ� " << endl;
	if (m_dot)
	{
		draw_hat_dot();
	}
	cout << endl;
}

int main()
{
	weapon bow("bow", 20, 4000, "��Ÿ� ������ ������ Ȱ", true);
	weapon snife("snife", 50, 3000, "ª���� ���� ������ ���� �ܰ�", false);
	weapon axe("axe", 80, 3500, "������ �������� ������ �ѹ��� ���� ����", false);
	weapon gun("gun", 30, 5000, "���Ÿ� �������� ���� �����ϴ� ��", false);
	weapon pan("pan", 10, 1000, "������� �Ķ�����", false);

	armor hat("hat", 30, 2000, "�Ӹ��� ��ȣ���ִ� ����", true);
	armor glove("glove", 40, 2500, "������ �Ƿ��� ���� ���ִ� �尩", false);
	armor shoes("shoes", 10, 2500, "���� ���� ����� �ִ� �Ź�", false);
	armor pants("pants", 60, 4000, "�������� ���� �ܴ��� ����", false);
	armor tee("tee", 80, 4500, "������ �ѷ� ��ź�� �Ǵ� Ƽ����", false);

	while (true)
	{
		cout << "������ ��� ���� ���⳪ ���� ��ȣ�� �����ÿ�" << endl;
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
		cout << "��";
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
