#pragma once
#include "Vehicle.h"
#include "Bike.h"
#include "Car.h"

#pragma region 다형성
/*
다형성
 객체의 속성이나 기능이 상황에 따라 여러가지 형태를 가질 수 있는 성질

 Virtual Function
  상속관계에 있는 클래스에서 부모클래스의 함수를 자식클래스에서 재정의(오버라이딩)
  부모클래스의 포인터나 참조를 통해 자식클래스의 함수 호출

  오버로딩 vs 오버라이딩?
*/

#pragma endregion

int main()
{
	Vehicle* v;
	v = new Car("현대");
	v->Move();
	delete v;

	v = new Bike("오토바이");
	v->Move();
	delete v;
}