#pragma once
#include <iostream>

using namespace std;

class Vehicle
{
protected:
	string name;

public:
	Vehicle(const string& n);
	virtual ~Vehicle();
	// �Ҹ����� ����� Ű����
	// �������� Ȱ��� �� ��ü�� �ùٸ��� �Ҹ�ǵ��� ����
	// ������� �����ʴ´ٸ� �⺻ Ŭ������ �Ҹ��ڸ� ȣ���� �ȴ� -> �ڽ�Ŭ���� �Ҹ��� ȣ��x

	virtual void Move()const;
};