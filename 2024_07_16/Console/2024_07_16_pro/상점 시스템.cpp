#pragma once
#include "Library.h"
#include "ShopGameScene.h"

/*
1. 아무거나 클래스 만들어서 벡터에 저장후 출력
2. 상점시스템
 shop 클래스 item 클래스
 캐릭터 클래스 -> 인벤토리 클래스
 아이템구매 -> 돈을 통해 -> 아이템 인벤토리로 이동
 인벤토리 -> 되팔기 -> 돈을 얻는다
 인벤토리에서는 장착 및 탈착이 가능해야한다
 수량제한
 아이템을 통한 캐릭터의 스탯창
*/

int main()
{
	string name;
	cout << "플레이어의 이름을 입력 하시오" << endl;
	cin >> name;

	Shop* shop = new Shop();
	Character* player = new Character(name, 10000, 50, 20);

	vector<Item*> items;
	items.push_back(new Weapon("검", 1000, 10));
	items.push_back(new Weapon("검", 1000, 10));
	items.push_back(new Weapon("검", 1000, 10));
	items.push_back(new Weapon("검", 1000, 10));
	items.push_back(new Weapon("장검", 1500, 10));
	items.push_back(new Weapon("장검", 1500, 10));
	items.push_back(new Weapon("장검", 1500, 10));
	items.push_back(new Weapon("총", 5000, 150));
	items.push_back(new Weapon("총", 5000, 150));
	items.push_back(new Armor("장갑", 500, 100));
	items.push_back(new Armor("장갑", 500, 100));
	items.push_back(new Armor("장갑", 500, 100));
	items.push_back(new Armor("투구", 200, 50));
	items.push_back(new Armor("투구", 200, 50));
	items.push_back(new Armor("투구", 200, 50));
	items.push_back(new Armor("투구", 200, 50));
	items.push_back(new Armor("투구", 200, 50));
	items.push_back(new Armor("투구", 200, 50));

	for (auto& item : items)
	{
		shop->InsertItem(item);
	}


	ShopGameScene* scene = new ShopGameScene(shop, player);

	while (true)
	{
		scene->GameLoop();
	}

	return 0;
}