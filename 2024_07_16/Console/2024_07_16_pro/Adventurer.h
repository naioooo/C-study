#pragma once
#include "Library.h"

class Adventurer
{
private:
	string name;

	int STR;
	int DEX;
	int INT;
	int LUK;

	int EXP;

public:

	Adventurer();
	Adventurer(const string& n, const int s, const int d, const int i, const int l, const int e);
	virtual ~Adventurer();

	string GetName();
	int GetSTR();
	int GetDEX();
	int GetINT();
	int GetLUK();
	int GetEXP();

	void SetName(const string & n);
	void SetSTR(const int s);
	void SetDEX(const int d);
	void SetINT(const int i);
	void SetLUK(const int l);
	void SetEXP(const int e);

	virtual void Move() = 0;
	virtual void Attack() = 0;

	virtual void ShowStats();
	//virtual void Damage();
};

