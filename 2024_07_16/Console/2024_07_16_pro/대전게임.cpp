#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;

/*
2. 대전게임
 플레이어와 몬스터 각각 클래스 존재
 기본적으로 둘다 공격력 방어력 체력 존재
 멤버변수는 private 함수는 public
 종료조건 뒤지면 끝
*/

enum INPUT
{
	FIGHT = 1,
	RUN,
	HEAL
};

class Object
{
private:
	string m_name;
	int m_HP;
	int m_ATK;
	int m_DEF;

public:
	Object(const string& name, const int HP, const int ATK, const int DEF)
		: m_name(name), m_HP(HP), m_ATK(ATK), m_DEF(DEF) {}

	void SetName(const string& name);
	void SetHP(const int HP);
	void SetATK(const int ATK);
	void SetDEF(const int DEF);

	string GetName() const;
	int GetHP() const;
	int GetATK() const;
	int GetDEF() const;

	void Print_State();
};

class Player : public Object
{
private:
	int m_EXP;
	int m_heal;
	
public:
	Player(const string& name, const int HP, const int ATK, const int DEF, const int EXP, const int heal)
		: Object(name, HP, ATK, DEF), m_EXP(EXP), m_heal(heal){}
	~Player() {};

	void SetEXP(const int EXP);
	void SetHeal(const int heal);
	int GetEXP() const;
	int GetHeal() const;	

	void Print_State();
};

class Monster : public Object
{
private:
	int m_avoidability;
	int m_reward;

public:
	Monster(const string& name, const int HP, const int ATK, const int DEF, const int avoidability, const int reward)
		: Object(name, HP, ATK, DEF), m_avoidability(avoidability), m_reward(reward) {}
	~Monster() {};

	void SetAvoidability(const int avoidability);
	void SetReward(const int reward);
	int GetAvoidability() const;
	int GetReward() const;
	void Print_State();
};

// 랜덤으로 생성 되는 몬스터
// 도망 칠 것인지 싸울 것인지 선택
// 싸워서 이기면 경험치 상승 레벨업시 능력치 상승
// 지면 경험치 하락 
// 플레이어는 경험치, 힐갯수 변수 존재
// 몬스터는 회피율 존재

int main()
{
	srand(time(NULL));
	
	string s_input;

	cout << " 대전 게임에 오셨습니다 " << endl;
	cout << "플레이어의 이름을 입력하세요 " << endl;
	cin >> s_input;
		
	Player* player = new Player(s_input, 200, 20, 30, 0, 10);

	cout << "게임을 시작합니다" << endl;

	while (true)
	{
		cout << " ====================================================== " << endl;
		cout << " 새로운 몬스터가 나타났다!  " << endl;
		cout << endl;

		int monster_HP = rand() % 100 + 1;
		int monster_ATK = rand() % 50 + 1;
		int monster_DEF = rand() % 50 + 1;
		int monster_avoidability = rand() % 30 + 1;
		int monster_reward = rand() % 30 + 10;

		Monster* monster = new Monster("몬스터", monster_HP, monster_ATK, monster_DEF, monster_avoidability, monster_reward);

		while (true)
		{
			player->Print_State();
			monster->Print_State();

			cout << " 1. 싸운다 2. 도망친다 3. 힐 " << endl;
			int input;
			cin >> input;
			system("cls");

			if (input == FIGHT)
			{
				int player_attackability = rand() % 100;
				int damage = 0;

				if (player_attackability > monster->GetAvoidability())
				{
					damage = player->GetATK() - monster->GetDEF();
					if (damage > 0)
					{
						monster->SetHP(monster->GetHP() - damage);
						cout << "몬스터가 "<< damage << "만큼 데미지를 입었습니다" << endl;
					}
					else
						cout << "몬스터는 데미지를 입지 않았습니다" << endl;

				}
				else
				{
					cout << "몬스터가 회피했습니다" << endl;
				}

				damage = monster->GetATK() - player->GetDEF();
				if (damage > 0)
				{
					player->SetHP(player->GetHP() - damage);
					cout << "플레이어는 " << damage << "만큼 데미지를 입었습니다" << endl;
				}
				else
					cout << "플레이어는 데미지를 입지 않았습니다" << endl;
			}
			else if (input == RUN)
			{
				cout << "도망 쳤다" << endl;
				break;
			}
			else if (input == HEAL)
			{
				if (player->GetHeal() > 0)
				{
					player->SetHeal(player->GetHeal() - 1);
					player->SetHP(player->GetHP() + 100);
					cout << "힐 했습니다" << endl;
				}
				else
				{
					cout << "힐 가능한 횟수가 없습니다" << endl;
				}
			}
			else
			{
				cout << "잘못 입력하셨습니다" << endl;
				cout << endl;
				continue;
			}

			cout << endl;

			if (player->GetHP() <= 0)
			{
				cout << " 플레이어가 사망했습니다 " << endl;
				break;
			}
			if (monster->GetHP() <= 0)
			{
				cout << " 몬스터를 처치했습니다" << endl;
				cout << " 경험치가 "<< monster->GetReward() << "만큼 상승했습니다" << endl;
				player->SetEXP(player->GetEXP() + monster->GetReward());

				if (player->GetEXP() > 100)
				{
					cout << " 레벨업!" << endl;
					player->SetEXP(0);
					player->SetHP(player->GetHP() + 100);
					player->SetATK(player->GetATK() + 10);
					player->SetDEF(player->GetDEF() + 10);
					player->SetHeal(player->GetHeal() + 5);
				}

				break;
			}

			cout << " ====================================================== " << endl;
			cout << endl;
		}

		if (player->GetHP() <= 0)
		{
			cout << "게임이 종료됩니다" << endl;
			break;
		}

		delete monster;
	}

	delete player;
	return 0;
}

void Object::SetName(const string& name)
{
	m_name = name;
}

void Object::SetHP(const int HP)
{
	m_HP = HP;
}

void Object::SetATK(const int ATK)
{
	m_ATK = ATK;
}

void Object::SetDEF(const int DEF)
{
	m_DEF = DEF;
}

string Object::GetName() const
{
	return m_name;
}

int Object::GetHP() const
{
	return m_HP;
}

int Object::GetATK() const
{
	return m_ATK;
}

int Object::GetDEF() const
{
	return m_DEF;
}

void Object::Print_State()
{
}

void Player::SetEXP(const int EXP)
{
	m_EXP = EXP;
}

void Player::SetHeal(const int heal)
{
	m_heal = heal;
}

int Player::GetEXP() const
{
	return m_EXP;
}

int Player::GetHeal() const
{
	return m_heal;
}

void Player::Print_State()
{
	cout << GetName() << "의 상태" << endl;
	cout << "체력 : " << GetHP() << " ";
	cout << "경험치 : " << GetEXP() << " ";
	cout << "회복 가능 횟수 : " << GetHeal() << endl;
	cout << "공격력 : " << GetATK() << " ";
	cout << "방어력 : " << GetDEF() << endl;
	cout << endl;
}

void Monster::SetAvoidability(const int avoidability)
{
	m_avoidability = avoidability;
}

void Monster::SetReward(const int reward)
{
	m_reward = reward;
}

int Monster::GetAvoidability() const
{
	return m_avoidability;
}

int Monster::GetReward() const
{
	return m_reward;
}

void Monster::Print_State()
{
	cout << "몬스터의 상태" << endl;
	cout << "체력 : " << GetHP() << " ";
	cout << "회피율 : " << GetAvoidability() << endl;
	cout << "공격력 : " << GetATK() << " ";
	cout << "방어력 : " << GetDEF() << endl;
	cout << endl;
}
