#pragma once
#include "Library.h"
#include "Scene.h"
#include "WaitingScene.h"
#include "GameScene.h"

int main()
{
	srand(time(NULL));

	vector<Scene*> Scenes;

	Scenes.push_back(new WaitingScene());

	while (true)
	{
		if (Scenes.empty())
			break;

		//���� �ڿ� �ִ� ���� ������ ����
		Scenes.back()->SceneLoop();

		//������ ������ ���� �غ� �ٵȴٸ� ���Ӿ� ������ �߰�
		if (Scenes.size() == 1 && Scenes.back()->Getgameready() == true)
		{
			WaitingScene* waitingscene = dynamic_cast<WaitingScene*> (Scenes.back());
			Scenes.push_back(new GameScene(waitingscene->Getplayers()));

			Scenes[0]->SceneClear();			
		}
		// ���Ӿ��� �����ٸ� ����
		else if (Scenes.back()->Getcheckover() == true)
		{
			delete Scenes.back();
			Scenes.pop_back();
		}
	}
	
	for (Scene* scene : Scenes)
	{
		delete scene;
	}

	return 0;
}

