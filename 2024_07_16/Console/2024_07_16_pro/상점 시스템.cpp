#pragma once
#include "Library.h"
#include "ShopGameScene.h"

/*
1. �ƹ��ų� Ŭ���� ���� ���Ϳ� ������ ���
2. �����ý���
 shop Ŭ���� item Ŭ����
 ĳ���� Ŭ���� -> �κ��丮 Ŭ����
 �����۱��� -> ���� ���� -> ������ �κ��丮�� �̵�
 �κ��丮 -> ���ȱ� -> ���� ��´�
 �κ��丮������ ���� �� Ż���� �����ؾ��Ѵ�
 ��������
 �������� ���� ĳ������ ����â
*/

int main()
{
	string name;
	cout << "�÷��̾��� �̸��� �Է� �Ͻÿ�" << endl;
	cin >> name;

	Shop* shop = new Shop();
	Character* player = new Character(name, 10000, 50, 20);

	vector<Item*> items;
	items.push_back(new Weapon("��", 1000, 10));
	items.push_back(new Weapon("��", 1000, 10));
	items.push_back(new Weapon("��", 1000, 10));
	items.push_back(new Weapon("��", 1000, 10));
	items.push_back(new Weapon("���", 1500, 10));
	items.push_back(new Weapon("���", 1500, 10));
	items.push_back(new Weapon("���", 1500, 10));
	items.push_back(new Weapon("��", 5000, 150));
	items.push_back(new Weapon("��", 5000, 150));
	items.push_back(new Armor("�尩", 500, 100));
	items.push_back(new Armor("�尩", 500, 100));
	items.push_back(new Armor("�尩", 500, 100));
	items.push_back(new Armor("����", 200, 50));
	items.push_back(new Armor("����", 200, 50));
	items.push_back(new Armor("����", 200, 50));
	items.push_back(new Armor("����", 200, 50));
	items.push_back(new Armor("����", 200, 50));
	items.push_back(new Armor("����", 200, 50));

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