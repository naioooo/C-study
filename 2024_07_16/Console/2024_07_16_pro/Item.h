#pragma once
#include "Library.h"

class Item
{
protected:
	string name;
	int price;

public:
	Item();
	Item(const string& n, const int p);
	virtual ~Item() = default;

	string GetName();
	int GetPrice();
	void SetName(const string& n);
	void SetPrice(const int p);
	
	virtual void PrintItem() = 0;
};

