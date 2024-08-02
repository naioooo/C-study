#include <iostream>

using namespace std;

#pragma region 생성자
/*
생성자(Constructor)
 객체가 생성될 떄 자동으로 호출되는 특별한 멤버함수
 객체의 초기화를 담당하고 클래스와 동일한 이름을 가지고 반환형 x
 기본생성자 매개변수가 있는 생성자 복사생성자 등등

생성자 멤버 변수 초기화 리스트
 이것을 통해 참조 변수와 상수를 초기화 할 수 있다
 생성자 뒤에 : 하고 대입할 변수에 매개변수 대입
*/


#pragma endregion

class Player
{
public:
	string mName;
	int mAtk;
	int mDef;

	// 기본 생성자
	Player()
	{
		cout << "플레이어가 기본생성자로 생성되었습니다 " << endl;
		mName = "호날두";
		mAtk = 1000;
		mDef = 2000;
	}
	// 매개변수가 있는 생성자
	// 구조체나 클래스를 넘길 때는 참조를 통하면 좋다
	Player(const string& name, int Atk, int Def)
	{
		cout << "플레이어가 매개변수 생성자로 생성되었습니다 " << endl;
		mName = name;
		mAtk = Atk;
		mDef = Def;
	}
	~Player()
	{
		cout << "플레이어가 소멸되었습니다 " << endl;
	}

	void PrintInfo() const; // 멤버 변수를 변경을 하지 않는다면 const를 붙여 오류방지
};

class Monster
{
public:
	string name;
	int atk;
	int def;

	// 생성자 멤버 초기화 리스트
	Monster(const string& n, int a, int d) : name(n), atk(a), def(d) {}

};

class Exam
{
public:
	const int num;
	int& score;

	Exam(int n, int s) : num(n), score(s){}

};

int main()
{
	Player* c = new Player();
	Player* p = new Player("메시", 8848, 1616);
	c->PrintInfo();
	p->PrintInfo();


	delete c;
	delete p;

	return 0;
}

void Player::PrintInfo() const
{
	cout << "이름 : " << mName << endl;
	cout << "Atk : " << mAtk << endl;
	cout << "Dtk : " << mDef << endl;
}
