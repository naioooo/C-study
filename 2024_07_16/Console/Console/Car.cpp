#pragma once
#include "Car.h"

Car::Car(const string& n) : Vehicle(n)
{
	cout << "자식car 생성자 호출" << endl;
}

Car::~Car()
{
	cout << "자식car 소멸자 호출" << endl;
}

void Car::Move() const
{
	cout << "자식car 함수 호출" << endl;
}
