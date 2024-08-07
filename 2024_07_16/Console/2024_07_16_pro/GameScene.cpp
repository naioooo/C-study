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
	cout << round++ << "��° ���� " << endl;
	for (Adventurer* player : players)
	{
		player->ShowStats();
	}

	// �ൿ �Է¹ޱ�
	Input();
	cout << endl;
	// ���� ����
	ProcessGame();
}

void GameScene::Input()
{
	for (int i = 0; i < players.size(); i++)
	{
		int input = 0;

		while (true)
		{
			cout << players[i]->GetName() << "�� �Է��ϼ���" << endl;
			cout << "1. �����ϱ� 2. ��ų��� 3. ���" << endl;
			cin >> input;
						
			if (input > 0 && input < 4)
			{
				if (input == SKILL && players[i]->Getableskill() <= 0)
				{
					cout << "��ų�� ��� ����߽��ϴ�" << endl;
					continue;
				}

				players[i]->Setinput(input);
				break;
			}

			cout << "����� �Է��Ͻÿ�" << endl;
		}

		if (input != PROTECT)
		{
			while (true)
			{
				cout << "������ Ÿ���� �Է��ϼ���" << endl;
				for (int j = 0; j < players.size(); j++)
				{
					if (i != j)
					{
						cout << j + 1 << "�� " << players[j]->GetName() << " ";
					}
				}
				cout << endl;
				cin >> input;

				if (input > 0 && input < MAX_PLAYER + 1)
				{
					if (input == i + 1)
					{
						cout << "�ڱ� �ڽ��� ������ �� �����ϴ�" << endl;
						continue;
					}
					players[i]->Settarget(input - 1);
					break;
				}

				cout << "����� �Է��Ͻÿ�" << endl;
			}
		}
		cout << endl;
	}
	cout << endl;
}

void GameScene::ProcessGame()
{
	int damage = 0;
	// ���� ����
	for (int i = 0; i < players.size(); i++)
	{
		switch (players[i]->Getinput())
		{
		// ���ݽ� �� �Ǵ��ϰ� ������ ���
		case ATTACK:
			damage = players[i]->Attack();
			if (players[players[i]->Gettarget()]->Getinput() == PROTECT)
			{
				cout << players[players[i]->Gettarget()]->GetName() << "�� ����߽��ϴ�" << endl;
			}
			else
			{
				cout << players[players[i]->Gettarget()]->GetName() << "�� " << damage << "��ŭ �������� �Ծ����ϴ�" << endl;
				players[players[i]->Gettarget()]->SetHP(players[players[i]->Gettarget()]->GetHP() - damage);
			}
			break;
		// ��ų�� �� ����
		case SKILL:
			damage = players[i]->Skill();
			players[i]->Setableskill(players[i]->Getableskill() - 1);
			cout << players[players[i]->Gettarget()]->GetName() << "�� " << damage << "��ŭ �������� �Ծ����ϴ�" << endl;
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
			cout << player->GetName() << "���� ����߽��ϴ�" << endl;
			cout << endl;
			return true;
		}
	}

	return false;
}

void GameScene::SceneClear()
{
}
