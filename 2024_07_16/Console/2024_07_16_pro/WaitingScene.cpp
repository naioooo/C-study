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
	// 게임준비가 됐는지 체크
	if (CheckGameReady())
	{
		Setgameready(true);
	}
	else
	{
		//직업과 이름 입력받기
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
	// 직업과 이름 입력받기
	int input_class = 0;
	string input_name;

	while (true)
	{
		cout << "원하시는 직업군을 선택하시오" << endl;
		cout << "1. 전사 2. 마법사 3. 궁수 4. 도적" << endl;
		cin >> input_class;

		if (input_class > 0 && input_class < 5)
			break;

		cout << "제대로 입력하시오" << endl;
	}

	cout << " 이름을 입력하시오" << endl;
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

