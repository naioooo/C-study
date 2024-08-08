#pragma once
#include "Item.h"
#include "Armor.h"
#include "Weapon.h"

#include "Inventory.h"
#include "EquipmentInventory.h"
#include "ItemInventory.h"

class Character
{
private:
	string name;
	int cash;
	int attack;
	int defense;

	EquipmentInventory* equipmentinventory;
	ItemInventory* iteminventory;

public:
	Character();
	Character(const string& name, const int cash, const int attack, const int defense);
	~Character();

	string Getname();
	int Getcash();
	int Getattack();
	int Getdefense();
	EquipmentInventory* &Getequipmentinventory();
	ItemInventory* &Getiteminventory();

	void Setname(const string& n);
	void Setcash(const int c);
	void Setattack(const int a);
	void Setdefense(const int d);
	void Setequipmentinventory(EquipmentInventory* &e);
	void Setiteminventory(ItemInventory* &i);

	void ShowStats();

};

