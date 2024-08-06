#include "Adventurer.h"

Adventurer::Adventurer()
{
}

Adventurer::Adventurer(const string& n, const int s, const int d, const int i, const int l, const int e)
	: name(n), STR(s), DEX(d), INT(i), LUK(l), EXP(e)
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

int Adventurer::GetEXP()
{
	return EXP;
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

void Adventurer::SetEXP(const int e)
{
	EXP = e;
}

void Adventurer::ShowStats()
{
	cout << " Á÷¾÷Àº : " << name << endl;
	cout << " STR : " << STR << " ";
	cout << " DEX : " << DEX << " ";
	cout << " INT : " << INT << " ";
	cout << " LUK : " << LUK << endl;
	cout << " EXP : " << EXP << " ";
}
