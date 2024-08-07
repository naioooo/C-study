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

	int HP;
	int input;
	int target;
	int ableskill;

public:

	Adventurer();
	Adventurer(const string& n, const int s, const int d, const int i, const int l, const int h);
	virtual ~Adventurer();

	string GetName();
	int GetSTR();
	int GetDEX();
	int GetINT();
	int GetLUK();
	int GetHP();
	int Getinput();
	int Gettarget();
	int Getableskill();

	void SetName(const string & n);
	void SetSTR(const int s);
	void SetDEX(const int d);
	void SetINT(const int i);
	void SetLUK(const int l);
	void SetHP(const int h);
	void Setinput(const int i);
	void Settarget(const int t);
	void Setableskill(const int s);

	virtual void Move() = 0;
	virtual int Attack() = 0;

	virtual void ShowStats();
	virtual int Skill() = 0;
};

