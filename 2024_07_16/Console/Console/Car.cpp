#pragma once
#include "Car.h"

Car::Car(const string& n) : Vehicle(n)
{
	cout << "�ڽ�car ������ ȣ��" << endl;
}

Car::~Car()
{
	cout << "�ڽ�car �Ҹ��� ȣ��" << endl;
}

void Car::Move() const
{
	cout << "�ڽ�car �Լ� ȣ��" << endl;
}
