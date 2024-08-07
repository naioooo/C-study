#include "GameScene.h"

GameScene::GameScene()
{
}

GameScene::GameScene(const vector<Adventurer*>& p)
{
	players = p;
	round = 1;
}

GameScene::~GameScene()
{
	for (auto player : players)
	{
		delete player;
	}
}

void GameScene::SceneLoop()
{	
	if (CheckGameOver())
	{
		Setcheckover(true);
	}
	else
	{
		GameLoop();
	}
}

void GameScene::GameLoop()
{
	cout << round++ << "번째 라운드 " << endl;
	for (Adventurer* player : players)
	{
		player->ShowStats();
	}

	// 행동 입력받기
	Input();
	cout << endl;
	// 게임 진행
	ProcessGame();
}

void GameScene::Input()
{
	for (int i = 0; i < players.size(); i++)
	{
		int input = 0;

		while (true)
		{
			cout << players[i]->GetName() << "님 입력하세요" << endl;
			cout << "1. 공격하기 2. 스킬사용 3. 방어" << endl;
			cin >> input;
						
			if (input > 0 && input < 4)
			{
				if (input == SKILL && players[i]->Getableskill() <= 0)
				{
					cout << "스킬을 모두 사용했습니다" << endl;
					continue;
				}

				players[i]->Setinput(input);
				break;
			}

			cout << "제대로 입력하시오" << endl;
		}

		if (input != PROTECT)
		{
			while (true)
			{
				cout << "공격할 타겟을 입력하세요" << endl;
				for (int j = 0; j < players.size(); j++)
				{
					if (i != j)
					{
						cout << j + 1 << "번 " << players[j]->GetName() << " ";
					}
				}
				cout << endl;
				cin >> input;

				if (input > 0 && input < MAX_PLAYER + 1)
				{
					if (input == i + 1)
					{
						cout << "자기 자신은 공격할 수 없습니다" << endl;
						continue;
					}
					players[i]->Settarget(input - 1);
					break;
				}

				cout << "제대로 입력하시오" << endl;
			}
		}
		cout << endl;
	}
	cout << endl;
}

void GameScene::ProcessGame()
{
	int damage = 0;
	// 게임 진행
	for (int i = 0; i < players.size(); i++)
	{
		switch (players[i]->Getinput())
		{
		// 공격시 방어를 판단하고 데미지 계산
		case ATTACK:
			damage = players[i]->Attack();
			if (players[players[i]->Gettarget()]->Getinput() == PROTECT)
			{
				cout << players[players[i]->Gettarget()]->GetName() << "가 방어했습니다" << endl;
			}
			else
			{
				cout << players[players[i]->Gettarget()]->GetName() << "가 " << damage << "만큼 데미지를 입었습니다" << endl;
				players[players[i]->Gettarget()]->SetHP(players[players[i]->Gettarget()]->GetHP() - damage);
			}
			break;
		// 스킬은 방어를 무시
		case SKILL:
			damage = players[i]->Skill();
			players[i]->Setableskill(players[i]->Getableskill() - 1);
			cout << players[players[i]->Gettarget()]->GetName() << "가 " << damage << "만큼 데미지를 입었습니다" << endl;
			players[players[i]->Gettarget()]->SetHP(players[players[i]->Gettarget()]->GetHP() - damage);
			break;
		}
	}
	cout << endl;
}

bool GameScene::CheckGameOver()
{
	for (Adventurer* player : players)
	{
		if (player->GetHP() <= 0)
		{
			cout << player->GetName() << "님이 사망했습니다" << endl;
			cout << endl;
			return true;
		}
	}

	return false;
}

void GameScene::SceneClear()
{
}
