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
	// 소멸자의 버츄얼 키워드
	// 다형성이 활용될 때 갤체가 올바르게 소멸되도록 선언
	// 버츄얼을 쓰지않는다면 기본 클래스의 소멸자만 호출이 된다 -> 자식클래스 소멸자 호출x

	virtual void Move()const;
};