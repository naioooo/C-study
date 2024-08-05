#pragma once

#include <iostream>
using namespace std;

class Unit
{
protected:
	string name;
	int health;

public:
	Unit();
	Unit(const string& n, const int h);
	~Unit();

public:
	void TakeDamage(const int damage);
};