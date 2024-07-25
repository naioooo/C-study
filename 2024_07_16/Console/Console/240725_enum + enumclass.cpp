#include <iostream>

using namespace std;

/*
����� ���� �ڷ���
 ����ü ����ü ������ Ŭ����



*/

#pragma region C_enum
/*
1. ������
 ���õ� ������� �ϳ��� �׷����� ���´�
 �ڵ��� �������� ���̰� �ǹ��ִ� �̸��� �ο��� �� �ִ�
*/
// ���� ���
enum  Color{Red, Green, White};
// ������� ���� �Ҵ� / �Ҵ� �� �� �ڿ� �ڸ��� �Ҵ��� ������ ���� ����
enum Direction {Left, Right = 2, Up, Down};
#pragma endregion


#pragma region enumClass
/*
enum class�� �������� ������, 
���� �̸��� ����� �ٸ� enum class ���� ������ �� �ֽ��ϴ�.

�ֿ� Ư¡
������: enum class�� ����� �ش� �������� ������ ���� �����մϴ�.
Ÿ�� ������: enum class�� ������ Ÿ�� üũ�� �����Ͽ�,
             �ٸ� ������ ������� ȥ���� �����մϴ�.
����� ���: enum class�� ����� ����� ���� �ݵ�� ������ �̸��� ����ؾ� �մϴ�.
             ���� ���, Color::RED�� ���� ����մϴ�.
*/
enum class MyEnumClass {One, Two, Three};
enum class Number {One, Two, Three};
#pragma endregion

enum class SkillType
{
	Fire, Ice, Lighting
};

void UseSkill(SkillType skill);

//enum ���� �������� �ش��� �Ϲ����� ����ȯ ��G�ϱ⿡ �������� �����
//enumclass ����� ����� �ʿ������� �������� Ȯ��

int main()
{
	Color color = Red;

	if (color == Red)
	{
		cout << "Red" << endl;
	}
	else if (color == Green)
	{
		cout << "Green" << endl;
	}

	Direction dir = Left;

	switch (dir)
	{
	case Left:
		cout << "Left" << endl;
		break;
	case Right:
		cout << "Right" << endl;
		break;
	case Up:
		cout << "Up" << endl;
		break;
	case Down:
		cout << "Down" << endl;
		break;
	}


	// enumClass �� �ߺ��� �����ϴ�
	MyEnumClass num1 = MyEnumClass::One;
	Number num2 = Number::One;

	// ��������� ����ȯ�� ����� �Ѵ�
	int num3 = static_cast<int>(Number::One);


}

void UseSkill(SkillType skill)
{
	switch (skill)
	{
	case SkillType::Fire:
		break;
	case SkillType::Ice:
		break;
	case SkillType::Lighting:
		break;
	}
}
