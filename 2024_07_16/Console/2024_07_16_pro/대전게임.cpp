#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;

/*
2. ��������
 �÷��̾�� ���� ���� Ŭ���� ����
 �⺻������ �Ѵ� ���ݷ� ���� ü�� ����
 ��������� private �Լ��� public
 �������� ������ ��
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

// �������� ���� �Ǵ� ����
// ���� ĥ ������ �ο� ������ ����
// �ο��� �̱�� ����ġ ��� �������� �ɷ�ġ ���
// ���� ����ġ �϶� 
// �÷��̾�� ����ġ, ������ ���� ����
// ���ʹ� ȸ���� ����

int main()
{
	srand(time(NULL));
	
	string s_input;

	cout << " ���� ���ӿ� ���̽��ϴ� " << endl;
	cout << "�÷��̾��� �̸��� �Է��ϼ��� " << endl;
	cin >> s_input;
		
	Player* player = new Player(s_input, 200, 20, 30, 0, 10);

	cout << "������ �����մϴ�" << endl;

	while (true)
	{
		cout << " ====================================================== " << endl;
		cout << " ���ο� ���Ͱ� ��Ÿ����!  " << endl;
		cout << endl;

		int monster_HP = rand() % 100 + 1;
		int monster_ATK = rand() % 50 + 1;
		int monster_DEF = rand() % 50 + 1;
		int monster_avoidability = rand() % 30 + 1;
		int monster_reward = rand() % 30 + 10;

		Monster* monster = new Monster("����", monster_HP, monster_ATK, monster_DEF, monster_avoidability, monster_reward);

		while (true)
		{
			player->Print_State();
			monster->Print_State();

			cout << " 1. �ο�� 2. ����ģ�� 3. �� " << endl;
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
						cout << "���Ͱ� "<< damage << "��ŭ �������� �Ծ����ϴ�" << endl;
					}
					else
						cout << "���ʹ� �������� ���� �ʾҽ��ϴ�" << endl;

				}
				else
				{
					cout << "���Ͱ� ȸ���߽��ϴ�" << endl;
				}

				damage = monster->GetATK() - player->GetDEF();
				if (damage > 0)
				{
					player->SetHP(player->GetHP() - damage);
					cout << "�÷��̾�� " << damage << "��ŭ �������� �Ծ����ϴ�" << endl;
				}
				else
					cout << "�÷��̾�� �������� ���� �ʾҽ��ϴ�" << endl;
			}
			else if (input == RUN)
			{
				cout << "���� �ƴ�" << endl;
				break;
			}
			else if (input == HEAL)
			{
				if (player->GetHeal() > 0)
				{
					player->SetHeal(player->GetHeal() - 1);
					player->SetHP(player->GetHP() + 100);
					cout << "�� �߽��ϴ�" << endl;
				}
				else
				{
					cout << "�� ������ Ƚ���� �����ϴ�" << endl;
				}
			}
			else
			{
				cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
				cout << endl;
				continue;
			}

			cout << endl;

			if (player->GetHP() <= 0)
			{
				cout << " �÷��̾ ����߽��ϴ� " << endl;
				break;
			}
			if (monster->GetHP() <= 0)
			{
				cout << " ���͸� óġ�߽��ϴ�" << endl;
				cout << " ����ġ�� "<< monster->GetReward() << "��ŭ ����߽��ϴ�" << endl;
				player->SetEXP(player->GetEXP() + monster->GetReward());

				if (player->GetEXP() > 100)
				{
					cout << " ������!" << endl;
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
			cout << "������ ����˴ϴ�" << endl;
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
	cout << GetName() << "�� ����" << endl;
	cout << "ü�� : " << GetHP() << " ";
	cout << "����ġ : " << GetEXP() << " ";
	cout << "ȸ�� ���� Ƚ�� : " << GetHeal() << endl;
	cout << "���ݷ� : " << GetATK() << " ";
	cout << "���� : " << GetDEF() << endl;
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
	cout << "������ ����" << endl;
	cout << "ü�� : " << GetHP() << " ";
	cout << "ȸ���� : " << GetAvoidability() << endl;
	cout << "���ݷ� : " << GetATK() << " ";
	cout << "���� : " << GetDEF() << endl;
	cout << endl;
}
