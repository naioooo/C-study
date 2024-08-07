#include "Adventurer.h"

Adventurer::Adventurer()
{
}

Adventurer::Adventurer(const string& n, const int s, const int d, const int i, const int l, const int h)
	: name(n), STR(s), DEX(d), INT(i), LUK(l), HP(h), input(0), ableskill(5)
{
}

Adventurer::~Adventurer()
{
}

string Adventurer::GetName()
{
	return name;
}

int Adventurer::GetSTR()
{
	return STR;
}

int Adventurer::GetDEX()
{
	return DEX;
}

int Adventurer::GetINT()
{
	return INT;
}

int Adventurer::GetLUK()
{
	return LUK;
}

int Adventurer::GetHP()
{
	return HP;
}

int Adventurer::Getinput()
{
	return input;
}

int Adventurer::Gettarget()
{
	return target;
}

int Adventurer::Getableskill()
{
	return ableskill;
}

void Adventurer::SetName(const string& n)
{
	name = n;
}

void Adventurer::SetSTR(const int s)
{
	STR = s;
}

void Adventurer::SetDEX(const int d)
{
	DEX = d;
}

void Adventurer::SetINT(const int i)
{
	INT = i;
}

void Adventurer::SetLUK(const int l)
{
	LUK = l;
}

void Adventurer::SetHP(const int h)
{
	HP = h;
}

void Adventurer::Setinput(const int i)
{
	input = i;
}

void Adventurer::Settarget(const int t)
{
	target = t;
}

void Adventurer::Setableskill(const int s)
{
	ableskill = s;
}

void Adventurer::ShowStats()
{
	cout << " 이름 : " << name << endl;
	cout << " HP : " << HP << " ";
	cout << " STR : " << STR << " ";
	cout << " DEX : " << DEX << " ";
	cout << " INT : " << INT << " ";
	cout << " LUK : " << LUK << endl;
	cout << " 사용가능한 스킬 : " << ableskill << endl;
}
