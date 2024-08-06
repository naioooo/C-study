#pragma once
#include "Bike.h"

Bike::Bike(const string& n) : Vehicle(n)
{
	cout << "자식Bike 생성자 호출" << endl;
}

Bike::~Bike()
{
	cout << "자식Bike 소멸자 호출" << endl;
}

void Bike::Move() const
{
	cout << "자식Bike 함수 호출" << endl;
}
