#pragma once
#include "Bike.h"

Bike::Bike(const string& n) : Vehicle(n)
{
	cout << "�ڽ�Bike ������ ȣ��" << endl;
}

Bike::~Bike()
{
	cout << "�ڽ�Bike �Ҹ��� ȣ��" << endl;
}

void Bike::Move() const
{
	cout << "�ڽ�Bike �Լ� ȣ��" << endl;
}
