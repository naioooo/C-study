#pragma once
#include "Vehicle.h"
#include "Bike.h"
#include "Car.h"

#pragma region ������
/*
������
 ��ü�� �Ӽ��̳� ����� ��Ȳ�� ���� �������� ���¸� ���� �� �ִ� ����

 Virtual Function
  ��Ӱ��迡 �ִ� Ŭ�������� �θ�Ŭ������ �Լ��� �ڽ�Ŭ�������� ������(�������̵�)
  �θ�Ŭ������ �����ͳ� ������ ���� �ڽ�Ŭ������ �Լ� ȣ��

  �����ε� vs �������̵�?
*/

#pragma endregion

int main()
{
	Vehicle* v;
	v = new Car("����");
	v->Move();
	delete v;

	v = new Bike("�������");
	v->Move();
	delete v;
}