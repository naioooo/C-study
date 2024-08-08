#include "Character.h"

Character::Character()
{

}

Character::Character(const string& name, const int cash, const int attack, const int defense)
	:name(name), cash(cash), attack(attack), defense(defense)
{
	equipmentinventory = new EquipmentInventory();
	iteminventory = new ItemInventory();
}

Character::~Character()
{

}

string Character::Getname()
{
	return name;
}

int Character::Getcash()
{
	return cash;
}

int Character::Getattack()
{
	return attack;
}

int Character::Getdefense()
{
	return defense;
}

EquipmentInventory* &Character::Getequipmentinventory()
{
	return equipmentinventory;
}

ItemInventory* &Character::Getiteminventory()
{
	return iteminventory;
}

void Character::Setname(const string& n)
{
	name = n;
}

void Character::Setcash(const int c)
{
	cash = c;
}

void Character::Setattack(const int a)
{
	attack = a;
}

void Character::Setdefense(const int d)
{
	defense = d;
}

void Character::Setequipmentinventory(EquipmentInventory* &e)
{
	equipmentinventory = e;
}

void Character::Setiteminventory(ItemInventory*& i)
{
	iteminventory = i;
}

void Character::ShowStats()
{
	cout << "==================================" << endl;
	cout << "�̸� : " << name << " ";
	cout << "ĳ�� : " << cash << endl;

	cout << "���� ������ ��� " << endl;
	equipmentinventory->PrintItems();

	int attacksum = attack;
	int defensesum = defense;
	if (!equipmentinventory->GetItems().empty())
	{
		for (auto& item : equipmentinventory->GetItems())
		{
			Weapon* weapon = dynamic_cast<Weapon*>(item.first);
			if (weapon != nullptr)
			{
				attacksum += weapon->GetAttack();
				continue;
			}
			Armor* armor = dynamic_cast<Armor*>(item.first);
			if (armor != nullptr)
			{
				defensesum += armor->GetDefense();
				continue;
			}
		}
	}
	cout << "���ݷ� : " << attacksum << " ";
	cout << "���� : " << defensesum << endl;
	cout << "==================================" << endl;
}
