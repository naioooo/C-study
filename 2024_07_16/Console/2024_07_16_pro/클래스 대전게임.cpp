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

		//제일 뒤에 있는 씬의 루프를 가동
		Scenes.back()->SceneLoop();

		//웨이팅 씬에서 게임 준비가 다된다면 게임씬 생성후 추가
		if (Scenes.size() == 1 && Scenes.back()->Getgameready() == true)
		{
			WaitingScene* waitingscene = dynamic_cast<WaitingScene*> (Scenes.back());
			Scenes.push_back(new GameScene(waitingscene->Getplayers()));

			Scenes[0]->SceneClear();			
		}
		// 게임씬이 끝난다면 삭제
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

