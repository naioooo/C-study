#pragma once
#include "Vehicle.h"

Vehicle::Vehicle(const string& n) : name(n)
{
	cout << "�θ�Ŭ���� ������" << endl;
}

Vehicle::~Vehicle()
{
	cout << "�θ�Ŭ���� �Ҹ���" << endl;
}

void Vehicle::Move() const
{
	cout << "�θ�Ŭ���� �Լ�" << endl;
}
