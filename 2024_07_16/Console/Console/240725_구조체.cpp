#include <iostream>
#include <string>

using namespace std;

/*
구조체 : Struct
 하나 이상의 변수를 그룹지어서 새로운 자료형을 정의

 <구조체 선언>
 struct 구조체 이름(구조체 내용);
  구조체 내용으로는 변수와 함수가 포함이 가능
  구조체에 포함한 변수를 멤버 변수, 포함된 함수를 멤버 함수라 함

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

//생성자가 있는 구조체
//<구조체 생성자>
//반환형 없이 구조체의 이름의 함수를 구현하여 사용

struct Monster
{
	string name;
	int hp;
	int mp;

	Monster()
	{
		cout << "몬스터 생성" << endl;
		name = "몬스터";
		hp = 10;
		mp = 20;
	}
	Monster(string _name, int _hp, int _mp)
	{
		cout << _name <<" 몬스터 생성" << endl;
		name = _name;
		hp = _hp;
		mp = _mp;
	}
	~Monster()
	{
		cout << "몬스터 소멸" << endl;
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
		cout << " 이름 : " << name << " 나이 : " << age << " 성별 : ";
		if (gender == 1)
			cout << "남성" << endl;
		else if (gender == 2)
			cout << "여성" << endl;
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
			cout << " 아버지 " << " ";
			father.print();
		}
		if (!mother.name.empty())
		{
			cout << " 어머니 " << " ";
			mother.print();
		}
		if (!grandfather.name.empty())
		{
			cout << " 할아버지 " << " ";
			grandfather.print();
		}
		if (!grandmother.name.empty())
		{
			cout << " 할머니 " << " ";
			grandmother.print();
		}
		if (!sister.name.empty())
		{
			cout << " 여자형제 " << " ";
			sister.print();
		}
		if (!brother.name.empty())
		{
			cout << " 남자형제 " << " ";
			brother.print();
		}
		
	}
};


/*
자료형 재정의
 자료형의 별칭을 생성하고 실제 자료형 이름 대신 사용
 <typedef 자료형 별칭>

 장점
가독성 향상: 복잡한 자료형을 간단하게 표현할 수 있어 코드의 가독성이 높아집니다.
유지보수 용이: 자료형이 변경될 경우, typedef로 정의된 이름만 수정하면 되므로 유지보수가 용이합니다.
코드 간결화: 반복적으로 사용되는 자료형을 간단하게 표현할 수 있습니다.
*/

typedef int myInt_t; // _t로 끝내는것 권장

/*
C++11부터는 typedef 대신 using 키워드를 사용할 수 있습니다.
using은 템플릿과 함께 사용할 때 특히 유용합니다.

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

	family.father = Human("김아빠", 50, Male);
	family.mother = Human("김엄마", 45, Female);
	family.grandfather = Human("김할아버지", 80, Male);
	family.grandmother = Human("김할머니", 75, Female);
	family.sister = Human("김여자형제", 25, Female);

	family.print();

	return 0;
}

void Point::Print()
{
	cout << "나는 멤버함수다" << endl;
	cout << " x : " << x << " y : " << y << endl;
}


