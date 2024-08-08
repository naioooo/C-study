#pragma once
#include "Item.h"
#include "Armor.h"
#include "Weapon.h"

#include "Inventory.h"
#include "EquipmentInventory.h"
#include "ItemInventory.h"
#include "Shop.h"

#include "Character.h"

class ShopGameScene
{
private:
	Shop* shop;
	Character* player;

public:
	ShopGameScene();
	ShopGameScene(Shop*& s, Character*& c);
	~ShopGameScene();

	void GameLoop();

	void ShopLoop();
	void InventoryLoop();

	void BuyItem();
	void SellItem();
	void PutOnEquipment();
	void ReleaseEquipment();

	void ShowStats();
	void ReturnHome();

	void CreateItem();
	void IncreaseCash();
};

