#include <iostream>
#include <string>

using namespace std;

/*
����ü : Struct
 �ϳ� �̻��� ������ �׷���� ���ο� �ڷ����� ����

 <����ü ����>
 struct ����ü �̸�(����ü ����);
  ����ü �������δ� ������ �Լ��� ������ ����
  ����ü�� ������ ������ ��� ����, ���Ե� �Լ��� ��� �Լ��� ��

*/

enum Gender
{
	Male = 1,
	Female
};

struct Student
{
	string name;
	int math;
	int english;
	int science;

	float Average()
	{
		return (math + english + science) / 3.0f;
	}
};

struct Point
{
	int x;
	int y;
	void Print();
};

//�����ڰ� �ִ� ����ü
//<����ü ������>
//��ȯ�� ���� ����ü�� �̸��� �Լ��� �����Ͽ� ���

struct Monster
{
	string name;
	int hp;
	int mp;

	Monster()
	{
		cout << "���� ����" << endl;
		name = "����";
		hp = 10;
		mp = 20;
	}
	Monster(string _name, int _hp, int _mp)
	{
		cout << _name <<" ���� ����" << endl;
		name = _name;
		hp = _hp;
		mp = _mp;
	}
	~Monster()
	{
		cout << "���� �Ҹ�" << endl;
	}

	void Print()
	{
		cout << endl;
		cout << "=======================" << endl;
		cout << name << " ";
		cout << hp << " ";
		cout << mp << endl;
		cout << "=======================" << endl;
		cout << endl;
	}
};

struct Human
{
	string name;
	int age;
	int gender;

	Human()
	{
	}
	Human(string _name, int _age, int _gender)
	{
		name = _name;
		age = _age;
		gender = _gender;
	}

	void print()
	{
		cout << " �̸� : " << name << " ���� : " << age << " ���� : ";
		if (gender == 1)
			cout << "����" << endl;
		else if (gender == 2)
			cout << "����" << endl;
	}
};

struct Family
{
	Human father;
	Human mother;
	Human grandfather;
	Human grandmother;
	Human sister;
	Human brother;

	Family()
	{
	}

	void print()
	{
		if (!father.name.empty())
		{
			cout << " �ƹ��� " << " ";
			father.print();
		}
		if (!mother.name.empty())
		{
			cout << " ��Ӵ� " << " ";
			mother.print();
		}
		if (!grandfather.name.empty())
		{
			cout << " �Ҿƹ��� " << " ";
			grandfather.print();
		}
		if (!grandmother.name.empty())
		{
			cout << " �ҸӴ� " << " ";
			grandmother.print();
		}
		if (!sister.name.empty())
		{
			cout << " �������� " << " ";
			sister.print();
		}
		if (!brother.name.empty())
		{
			cout << " �������� " << " ";
			brother.print();
		}
		
	}
};


/*
�ڷ��� ������
 �ڷ����� ��Ī�� �����ϰ� ���� �ڷ��� �̸� ��� ���
 <typedef �ڷ��� ��Ī>

 ����
������ ���: ������ �ڷ����� �����ϰ� ǥ���� �� �־� �ڵ��� �������� �������ϴ�.
�������� ����: �ڷ����� ����� ���, typedef�� ���ǵ� �̸��� �����ϸ� �ǹǷ� ���������� �����մϴ�.
�ڵ� ����ȭ: �ݺ������� ���Ǵ� �ڷ����� �����ϰ� ǥ���� �� �ֽ��ϴ�.
*/

typedef int myInt_t; // _t�� �����°� ����

/*
C++11���ʹ� typedef ��� using Ű���带 ����� �� �ֽ��ϴ�.
using�� ���ø��� �Բ� ����� �� Ư�� �����մϴ�.

*/      

using UINT = unsigned int;

int main()
{
	Point p;
	p.x = 3;
	p.y = 3;
	p.Print();
	cout << " x : " << p.x << " y : " << p.y << endl;


	Monster monster;
	Monster dragon = Monster("dragon", 20, 30);
	Monster slime = Monster("slime", 5, 3);

	//monster.Print();
	//dragon.Print();
	//slime.Print();



	Family family;

	family.father = Human("��ƺ�", 50, Male);
	family.mother = Human("�����", 45, Female);
	family.grandfather = Human("���Ҿƹ���", 80, Male);
	family.grandmother = Human("���ҸӴ�", 75, Female);
	family.sister = Human("�迩������", 25, Female);

	family.print();

	return 0;
}

void Point::Print()
{
	cout << "���� ����Լ���" << endl;
	cout << " x : " << x << " y : " << y << endl;
}


