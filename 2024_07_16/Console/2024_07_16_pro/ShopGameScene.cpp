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
		cout << "������ �ұ��?" << endl;
		cout << "1. ����â 2. ���â" << endl;
		cin >> input;

		if (input == 1 || input == 2)
			break;

		cout << "�ٽ� �Է��Ͻÿ�" << endl;
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
			cout << "������ ���̽��ϴ� " << endl;
			cout << "���� �� : " << player->Getcash() << endl;
			shop->PrintItems();
			player->Getiteminventory()->PrintItems();
			cout << endl;

			cout << "���Ͻô� ��ȣ�� �Է��Ͻÿ� " << endl;
			cout << "1. ������ ���� 2. ������ �Ǹ� 3. ������ ������ �߰��ϱ� 4. ������ �� �߰� 5. ������ " << endl;
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
			cout << "�ٽ� �Է��Ͻÿ�" << endl;
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
			cout << "�κ��丮�� ���̽��ϴ� " << endl;
			player->Getiteminventory()->PrintItems();
			player->Getequipmentinventory()->PrintItems();
			cout << endl;

			cout << "���Ͻô� ��ȣ�� �Է��Ͻÿ� " << endl;
			cout << "1. ��� ���� 2. ��� ���� 3. ����â 4. ������ " << endl;
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
			cout << "�ٽ� �Է��Ͻÿ�" << endl;
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
		cout << "������ �������� �����ϴ�" << endl;
		ReturnHome();
		return;
	}

	int input = 0;

	while (true)
	{
		cout << "���Ͻô� �������� ������" << endl;
		cout << "���� �� : " << player->Getcash() << endl;
		shop->PrintItems();
		cout << " 0 : ������ " << endl;
		cin >> input;

		if (input >= 0 && input <= shop->GetItems().size())
		{
			if (input == 0)
				return;
			if (shop->GetItems()[input - 1].first->GetPrice() > player->Getcash())
			{
				cout << "�ܾ��� �����մϴ�" << endl;
			}
			else
				break;
		}

		system("cls");
		cout << "�ٽ� �Է��Ͻÿ�" << endl;
		cout << endl;
	}

	int choice = input - 1;

	cout << "�������� "  << shop->GetItems()[choice].first->GetPrice() << "���� �����ϰ� "
	<< shop->GetItems()[choice].first->GetName() << "�� �����߽��ϴ�";
		
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
		cout << "�Ǹ��� �������� �����ϴ�" << endl;
		ReturnHome();
		return;
	}

	int input = 0;
	cout << "�ǸŸ� ���ϴ� �������� ������" << endl;

	while (true)
	{		
		player->Getiteminventory()->PrintItems();
		cin >> input;

		if (input > 0 && input <= player->Getiteminventory()->GetItems().size())
		{
			break;
		}

		system("cls");
		cout << "�ٽ� �Է��Ͻÿ�" << endl;
		cout << endl;
	}

	int choice = input - 1;
	cout << "������ " << player->Getiteminventory()->GetItems()[choice].first->GetName()
		<< "�� �Ǹ��ϰ� " << player->Getiteminventory()->GetItems()[choice].first->GetPrice()
		<< "���� ������ϴ�";

	player->Setcash(player->Getcash() + player->Getiteminventory()->GetItems()[choice].first->GetPrice());
	player->Getiteminventory()->EraseItem(choice);

	ReturnHome();
}

void ShopGameScene::PutOnEquipment()
{
	system("cls");

	if (player->Getiteminventory()->GetItems().empty())
	{
		cout << "������ ��� �����ϴ�" << endl;
		ReturnHome();
		return;
	}

	int input = 0;

	while (true)
	{
		cout << "������ ��� ���ÿ�" << endl;
		player->Getiteminventory()->PrintItems();
		player->Getequipmentinventory()->PrintItems();
		cout << endl;

		cin >> input;

		if (input > 0 && input <= player->Getiteminventory()->GetItems().size())
		{
			break;
		}

		system("cls");
		cout << "�ٽ� �Է��Ͻÿ�" << endl;
		cout << endl;
	}

	int choice = input - 1;

	if (!player->Getequipmentinventory()->CheckItem(player->Getiteminventory()->GetItems()[choice].first))
	{
		cout << player->Getiteminventory()->GetItems()[choice].first->GetName() << "�� �����߽��ϴ�" << endl;
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
		cout << "���� ���� �� ��� �����ϴ�" << endl;
		ReturnHome();
		return;
	}

	int input = 0;

	while (true)
	{
		cout << "���� ���� ��� ���ÿ�" << endl;
		player->Getequipmentinventory()->PrintItems();
		cout << endl;

		cin >> input;

		if (input > 0 && input <= player->Getequipmentinventory()->GetItems().size())
		{
			break;
		}

		system("cls");
		cout << "�ٽ� �Է��Ͻÿ�" << endl;
		cout << endl;
	}

	int choice = input - 1;

	cout << player->Getequipmentinventory()->GetItems()[choice].first->GetName() << "�� �����߽��ϴ�" << endl;

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
		cout << "���ư����� 1�� �Է��Ͻÿ�" << endl;
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
		cout << "������ ������ ������ ���ÿ�" << endl;
		cout << "1 : ���� 2 : ��" << endl;
		cin >> item_input;

		if (item_input == 1 || item_input == 2)
			break;
	}

	cout << endl;

	cout << "������ ������ �̸��� �����ÿ�" << endl;
	cin >> name;

	while (true)
	{
		cout << "������ ������ ���ݸ� �����ÿ�" << endl;
		cin >> cash_input;

		if (cash_input > 0)
			break;
	}

	switch (item_input)
	{
	case 1:
		while (true)
		{			
			cout << "������ ������ ���ݷ¸� �����ÿ�" << endl;
			cin >> attack_input;

			if (attack_input > 0)
				break;
		}
		item = new Weapon(name, cash_input, attack_input);
		break;
	case 2:
		while (true)
		{
			cout << "������ ������ ���¸� �����ÿ�" << endl;
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
	cout << "������ ���� ���� �߰��Ǿ����ϴ�" << endl;
	ReturnHome();
}
