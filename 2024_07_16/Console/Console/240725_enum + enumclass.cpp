#include <iostream>

using namespace std;

/*
사용자 정의 자료형
 구조체 공용체 열거형 클래스



*/

#pragma region C_enum
/*
1. 열거형
 관련된 상수들을 하나의 그룹으로 묶는다
 코드의 가독성을 높이고 의미있는 이름을 부여할 수 있다
*/
// 선언 방법
enum  Color{Red, Green, White};
// 명시적인 값을 할당 / 할당 후 엔 뒤에 자리는 할당한 값에서 부터 증가
enum Direction {Left, Right = 2, Up, Down};
#pragma endregion


#pragma region enumClass
/*
enum class는 스코프를 가지며, 
같은 이름의 상수가 다른 enum class 내에 존재할 수 있습니다.

주요 특징
스코프: enum class의 상수는 해당 열거형의 스코프 내에 존재합니다.
타입 안전성: enum class는 강력한 타입 체크를 제공하여,
             다른 열거형 상수와의 혼동을 방지합니다.
명시적 사용: enum class의 상수를 사용할 때는 반드시 열거형 이름을 명시해야 합니다.
             예를 들어, Color::RED와 같이 사용합니다.
*/
enum class MyEnumClass {One, Two, Three};
enum class Number {One, Two, Three};
#pragma endregion

enum class SkillType
{
	Fire, Ice, Lighting
};

void UseSkill(SkillType skill);

//enum 전역 스코프에 해당함 암묵적인 형변환 허욯하기에 안전성이 우려됨
//enumclass 명시적 사용이 필요하지만 안정성이 확보

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


	// enumClass 는 중복이 가능하다
	MyEnumClass num1 = MyEnumClass::One;
	Number num2 = Number::One;

	// 명시적으로 형변환을 해줘야 한다
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
