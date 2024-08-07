#include "WaitingScene.h"

WaitingScene::WaitingScene()
{
}

WaitingScene::~WaitingScene()
{
	for (auto player : players)
	{
		delete player;
	}
}

vector<Adventurer*> WaitingScene::Getplayers()
{
	return players;
}

void WaitingScene::Setplayers(const vector<Adventurer*>& p)
{
	players = p;
}

void WaitingScene::SceneLoop()
{
	// �����غ� �ƴ��� üũ
	if (CheckGameReady())
	{
		Setgameready(true);
	}
	else
	{
		//������ �̸� �Է¹ޱ�
		WaitingLoop();

		cout << endl;
		for (auto p : players)
		{
			cout << p->GetName() << " ";
		}
		cout << endl;
		cout << endl;
	}
}

void WaitingScene::WaitingLoop()
{
	// ������ �̸� �Է¹ޱ�
	int input_class = 0;
	string input_name;

	while (true)
	{
		cout << "���Ͻô� �������� �����Ͻÿ�" << endl;
		cout << "1. ���� 2. ������ 3. �ü� 4. ����" << endl;
		cin >> input_class;

		if (input_class > 0 && input_class < 5)
			break;

		cout << "����� �Է��Ͻÿ�" << endl;
	}

	cout << " �̸��� �Է��Ͻÿ�" << endl;
	cin >> input_name;

	switch (input_class)
	{
	case WARRIOR:
		players.push_back(new Warrior(input_name, 200, 50, 4, 4, 1000));
		break;
	case MAGE:
		players.push_back(new Mage(input_name, 4, 4, 200, 50, 1000));
		break;
	case ARCHER:
		players.push_back(new Archer(input_name, 50, 200, 4, 4, 1000));
		break;
	case THIEF:
		players.push_back(new Thief(input_name, 4, 50, 4, 200, 1000));
		break;

	default:
		break;
	}
}

bool WaitingScene::CheckGameReady()
{
	if (players.size() >= MAX_PLAYER)
	{
		return true;
	}

	return false;
}

void WaitingScene::SceneClear()
{
	players.clear();
	Setgameready(false);
}

