#include <iostream>

using namespace std;

#pragma region 持失切
/*
持失切(Constructor)
 梓端亜 持失吃 �� 切疑生稽 硲窒鞠澗 働紺廃 呉獄敗呪
 梓端税 段奄鉢研 眼雁馬壱 適掘什人 疑析廃 戚硯聖 亜走壱 鋼発莫 x
 奄沙持失切 古鯵痕呪亜 赤澗 持失切 差紫持失切 去去

持失切 呉獄 痕呪 段奄鉢 軒什闘
 戚依聖 搭背 凧繕 痕呪人 雌呪研 段奄鉢 拝 呪 赤陥
 持失切 及拭 : 馬壱 企脊拝 痕呪拭 古鯵痕呪 企脊
*/


#pragma endregion

class Player
{
public:
	string mName;
	int mAtk;
	int mDef;

	// 奄沙 持失切
	Player()
	{
		cout << "巴傾戚嬢亜 奄沙持失切稽 持失鞠醸柔艦陥 " << endl;
		mName = "硲劾砧";
		mAtk = 1000;
		mDef = 2000;
	}
	// 古鯵痕呪亜 赤澗 持失切
	// 姥繕端蟹 適掘什研 角掩 凶澗 凧繕研 搭馬檎 疏陥
	Player(const string& name, int Atk, int Def)
	{
		cout << "巴傾戚嬢亜 古鯵痕呪 持失切稽 持失鞠醸柔艦陥 " << endl;
		mName = name;
		mAtk = Atk;
		mDef = Def;
	}
	~Player()
	{
		cout << "巴傾戚嬢亜 社瑚鞠醸柔艦陥 " << endl;
	}

	void PrintInfo() const; // 呉獄 痕呪研 痕井聖 馬走 省澗陥檎 const研 細食 神嫌号走
};

class Monster
{
public:
	string name;
	int atk;
	int def;

	// 持失切 呉獄 段奄鉢 軒什闘
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
	Player* p = new Player("五獣", 8848, 1616);
	c->PrintInfo();
	p->PrintInfo();


	delete c;
	delete p;

	return 0;
}

void Player::PrintInfo() const
{
	cout << "戚硯 : " << mName << endl;
	cout << "Atk : " << mAtk << endl;
	cout << "Dtk : " << mDef << endl;
}
