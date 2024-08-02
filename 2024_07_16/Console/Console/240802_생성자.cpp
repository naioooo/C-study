#include <iostream>

using namespace std;

#pragma region ������
/*
������(Constructor)
 ��ü�� ������ �� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
 ��ü�� �ʱ�ȭ�� ����ϰ� Ŭ������ ������ �̸��� ������ ��ȯ�� x
 �⺻������ �Ű������� �ִ� ������ ��������� ���

������ ��� ���� �ʱ�ȭ ����Ʈ
 �̰��� ���� ���� ������ ����� �ʱ�ȭ �� �� �ִ�
 ������ �ڿ� : �ϰ� ������ ������ �Ű����� ����
*/


#pragma endregion

class Player
{
public:
	string mName;
	int mAtk;
	int mDef;

	// �⺻ ������
	Player()
	{
		cout << "�÷��̾ �⺻�����ڷ� �����Ǿ����ϴ� " << endl;
		mName = "ȣ����";
		mAtk = 1000;
		mDef = 2000;
	}
	// �Ű������� �ִ� ������
	// ����ü�� Ŭ������ �ѱ� ���� ������ ���ϸ� ����
	Player(const string& name, int Atk, int Def)
	{
		cout << "�÷��̾ �Ű����� �����ڷ� �����Ǿ����ϴ� " << endl;
		mName = name;
		mAtk = Atk;
		mDef = Def;
	}
	~Player()
	{
		cout << "�÷��̾ �Ҹ�Ǿ����ϴ� " << endl;
	}

	void PrintInfo() const; // ��� ������ ������ ���� �ʴ´ٸ� const�� �ٿ� ��������
};

class Monster
{
public:
	string name;
	int atk;
	int def;

	// ������ ��� �ʱ�ȭ ����Ʈ
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
	Player* p = new Player("�޽�", 8848, 1616);
	c->PrintInfo();
	p->PrintInfo();


	delete c;
	delete p;

	return 0;
}

void Player::PrintInfo() const
{
	cout << "�̸� : " << mName << endl;
	cout << "Atk : " << mAtk << endl;
	cout << "Dtk : " << mDef << endl;
}
