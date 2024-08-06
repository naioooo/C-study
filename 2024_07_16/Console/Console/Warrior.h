#pragma once

#include "Unit.h"
using namespace std;

class Warrior : public Unit
{
protected:

public:
	Warrior();
	Warrior(const string& n, const int h);
	~Warrior();
};