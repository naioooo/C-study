#pragma once

#include "Unit.h"
using namespace std;

class Mage : public Unit
{
protected:

public:
	Mage();
	Mage(const string& n, const int h);
	~Mage();
};