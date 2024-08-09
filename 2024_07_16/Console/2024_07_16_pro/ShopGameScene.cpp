#include "ShopGameScene.h"

ShopGameScene::ShopGameScene()
{
}

ShopGameScene::ShopGameScene(Shop*& s, Character*& c)
{
	shop = s;
	player = c;
}

ShopGameScene::~ShopGameScene()
{
	delete shop;
	delete player;

	shop = nullptr;
	player = nullptr;
}

void ShopGameScene::GameLoop()
{
	int input = 0;
	system("cls");

	while (true)
	{
		cout << "무엇을 할까요?" << endl;
		cout << "1. 상점창 2. 장비창" << endl;
		cin >> input;

		if (input == 1 || input == 2)
			break;

		cout << "다시 입력하시오" << endl;
	}

	system("cls");

	switch (input)
	{
	case 1:
		ShopLoop();
		break;
	case 2:
		InventoryLoop();
		break;
	}
}

void ShopGameScene::ShopLoop()
{
	while (true)
	{
		system("cls");

		int input = 0;

		while (true)
		{
			cout << "상점에 오셨습니다 " << endl;
			cout << "남은 돈 : " << player->Getcash() << endl;
			shop->PrintItems();
			player->Getiteminventory()->PrintItems();
			cout << endl;

			cout << "원하시는 번호를 입력하시오 " << endl;
			cout << "1. 아이템 구매 2. 아이템 판매 3. 상점에 아이템 추가하기 4. 소지한 돈 추가 5. 나가기 " << endl;
			cin >> input;

			if(input == 5)
			{
				return;
			}

			if (input == 1 || input == 2 || input == 3 || input == 4)
			{
				break;
			}

			system("cls");
			cout << "다시 입력하시오" << endl;
			cout << endl;
		}

		switch (input)
		{
		case 1:
			BuyItem();
			break;
		case 2:
			SellItem();
			break;
		case 3:
			CreateItem();
			break;
		case 4:
			IncreaseCash();
			break;
		}
	}	
}

void ShopGameScene::InventoryLoop()
{
	while (true)
	{
		system("cls");

		int input = 0;

		while (true)
		{
			cout << "인벤토리에 오셨습니다 " << endl;
			player->Getiteminventory()->PrintItems();
			player->Getequipmentinventory()->PrintItems();
			cout << endl;

			cout << "원하시는 번호를 입력하시오 " << endl;
			cout << "1. 장비 장착 2. 장비 해제 3. 스탯창 4. 나가기 " << endl;
			cin >> input;

			if (input == 4)
			{
				return;
			}
			else if (input == 1 || input == 2 || input == 3)
			{
				break;
			}

			system("cls");
			cout << "다시 입력하시오" << endl;
			cout << endl;
		}

		switch (input)
		{
		case 1:
			PutOnEquipment();
			break;
		case 2:
			ReleaseEquipment();
			break;
		case 3:
			ShowStats();
			break;
		case 4:
			IncreaseCash();
			break;
		}
	}	
}

void ShopGameScene::BuyItem()
{
	system("cls");

	if (shop->GetItems().empty())
	{
		cout << "구매할 아이템이 없습니다" << endl;
		ReturnHome();
		return;
	}

	int input = 0;

	while (true)
	{
		cout << "원하시는 아이템을 고르세요" << endl;
		cout << "남은 돈 : " << player->Getcash() << endl;
		shop->PrintItems();
		cout << " 0 : 나가기 " << endl;
		cin >> input;

		if (input >= 0 && input <= shop->GetItems().size())
		{
			if (input == 0)
				return;
			if (shop->GetItems()[input - 1].first->GetPrice() > player->Getcash())
			{
				cout << "잔액이 부족합니다" << endl;
			}
			else
				break;
		}

		system("cls");
		cout << "다시 입력하시오" << endl;
		cout << endl;
	}

	int choice = input - 1;

	cout << "상점에서 "  << shop->GetItems()[choice].first->GetPrice() << "원을 지불하고 "
	<< shop->GetItems()[choice].first->GetName() << "을 구매했습니다";
		
	player->Getiteminventory()->InsertItem(shop->GetItems()[choice].first);
	player->Setcash(player->Getcash() - shop->GetItems()[choice].first->GetPrice());
	shop->EraseItem(choice);

	ReturnHome();
}

void ShopGameScene::SellItem()
{
	system("cls");

	if (player->Getiteminventory()->GetItems().empty())
	{
		cout << "판매할 아이템이 없습니다" << endl;
		ReturnHome();
		return;
	}

	int input = 0;
	cout << "판매를 원하는 아이템을 고르세요" << endl;

	while (true)
	{		
		player->Getiteminventory()->PrintItems();
		cin >> input;

		if (input > 0 && input <= player->Getiteminventory()->GetItems().size())
		{
			break;
		}

		system("cls");
		cout << "다시 입력하시오" << endl;
		cout << endl;
	}

	int choice = input - 1;
	cout << "상점에 " << player->Getiteminventory()->GetItems()[choice].first->GetName()
		<< "를 판매하고 " << player->Getiteminventory()->GetItems()[choice].first->GetPrice()
		<< "원을 얻었습니다";

	player->Setcash(player->Getcash() + player->Getiteminventory()->GetItems()[choice].first->GetPrice());
	player->Getiteminventory()->EraseItem(choice);

	ReturnHome();
}

void ShopGameScene::PutOnEquipment()
{
	system("cls");

	if (player->Getiteminventory()->GetItems().empty())
	{
		cout << "착용할 장비가 없습니다" << endl;
		ReturnHome();
		return;
	}

	int input = 0;

	while (true)
	{
		cout << "착용할 장비를 고르시오" << endl;
		player->Getiteminventory()->PrintItems();
		player->Getequipmentinventory()->PrintItems();
		cout << endl;

		cin >> input;

		if (input > 0 && input <= player->Getiteminventory()->GetItems().size())
		{
			break;
		}

		system("cls");
		cout << "다시 입력하시오" << endl;
		cout << endl;
	}

	int choice = input - 1;

	if (!player->Getequipmentinventory()->CheckItem(player->Getiteminventory()->GetItems()[choice].first))
	{
		cout << player->Getiteminventory()->GetItems()[choice].first->GetName() << "을 착용했습니다" << endl;
		player->Getequipmentinventory()->InsertItem(player->Getiteminventory()->GetItems()[choice].first);
		player->Getiteminventory()->EraseItem(choice);
	}


	ReturnHome();
}

void ShopGameScene::ReleaseEquipment()
{
	system("cls");
	if (player->Getequipmentinventory()->GetItems().empty())
	{
		cout << "착용 해제 할 장비가 없습니다" << endl;
		ReturnHome();
		return;
	}

	int input = 0;

	while (true)
	{
		cout << "착용 해제 장비를 고르시오" << endl;
		player->Getequipmentinventory()->PrintItems();
		cout << endl;

		cin >> input;

		if (input > 0 && input <= player->Getequipmentinventory()->GetItems().size())
		{
			break;
		}

		system("cls");
		cout << "다시 입력하시오" << endl;
		cout << endl;
	}

	int choice = input - 1;

	cout << player->Getequipmentinventory()->GetItems()[choice].first->GetName() << "을 해제했습니다" << endl;

	player->Getiteminventory()->InsertItem(player->Getequipmentinventory()->GetItems()[choice].first);
	player->Getequipmentinventory()->EraseItem(choice);

	ReturnHome();
}

void ShopGameScene::ShowStats()
{
	system("cls");
	player->ShowStats(); 
	ReturnHome();
}

void ShopGameScene::ReturnHome()
{
	cout << endl;
	while (true)
	{
		int input = 0;
		cout << "돌아가려면 1을 입력하시오" << endl;
		cin >> input;

		if (input == 1)
			break;

		system("cls");
	}
}

void ShopGameScene::CreateItem()
{
	system("cls");

	int item_input = 0;
	int cash_input = 0;
	int attack_input = 0;
	int defense_input = 0;
	string name;

	Item* item;

	while (true)
	{
		cout << "생성할 아이템 종류를 고르시오" << endl;
		cout << "1 : 무기 2 : 방어구" << endl;
		cin >> item_input;

		if (item_input == 1 || item_input == 2)
			break;
	}

	cout << endl;

	cout << "생성할 아이템 이름을 적으시오" << endl;
	cin >> name;

	while (true)
	{
		cout << "생성할 아이템 가격를 적으시오" << endl;
		cin >> cash_input;

		if (cash_input > 0)
			break;
	}

	switch (item_input)
	{
	case 1:
		while (true)
		{			
			cout << "생성할 아이템 공격력를 적으시오" << endl;
			cin >> attack_input;

			if (attack_input > 0)
				break;
		}
		item = new Weapon(name, cash_input, attack_input);
		break;
	case 2:
		while (true)
		{
			cout << "생성할 아이템 방어력를 적으시오" << endl;
			cin >> defense_input;

			if (defense_input > 0)
				break;
		}

		item = new Armor(name, cash_input, defense_input);
		break;

	default:
		break;
	}

	shop->InsertItem(item);
	ReturnHome();
}

void ShopGameScene::IncreaseCash()
{
	system("cls");
	player->Setcash(player->Getcash() + 10000);
	cout << "소지한 돈이 만원 추가되었습니다" << endl;
	ReturnHome();
}
