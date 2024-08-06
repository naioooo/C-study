#pragma once
#include "Vehicle.h"

Vehicle::Vehicle(const string& n) : name(n)
{
	cout << "부모클래스 생성자" << endl;
}

Vehicle::~Vehicle()
{
	cout << "부모클래스 소멸자" << endl;
}

void Vehicle::Move() const
{
	cout << "부모클래스 함수" << endl;
}
