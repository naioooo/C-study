#include <iostream>

using namespace std;


// 멤버변수는 private
// 생성자 소멸자 멤버함수 public
// 접근자(getter) 설정자(setter)

class Person
{
private:
	string name;
	int age;

public:
	string GetName() const
	{
		return name;
	}

	void SetName(const string& n)
	{
		name = n;
	}
};

int main()
{
	Person p;
	p.SetName("호날두");
	cout << p.GetName() << endl;
}

/*
클래스는 설계도
 객체를 찍어내기 위한 틀
 구조체와 클래스의 차이는 기본 접근제어 지시자가 다르다

접근제어 지시자는 private, public, protected가 있다
 프라이빗 은 오로지 클래스 내부에서만 접근가능 / 멤버변수
 퍼블릭은 클래스 내외부 모두 접근가능 / 멤버함수 생성자 소멸자
 프로텍티드 상속 관계에서 활용 / 클래스 내부와 상속된 클래스에서 접근가능

생성자는 기본적으로 무조건 호출이 되며 없는 경우 컴파일러가 알아서 생성
 생성자는 일반적으로 멤버변수 초기화 할 때 사용하며,
  멤버 이니셜라이즈 리스트를 통해 초기화하는 것이 효율적 / 상수, 참조변수는 이것을 통해서 초기화
소멸자는 생성자와 마찬가지로 자동호출
 이곳에서 메모리 해제를 한다

생성자 -> 소멸자 순서이다
생성자는 오버로딩 가능 소멸자는 불가능

접근자 설정자는 캡슐화를 통해 보존하며 외부에서 변경이 가능

const 쓰는 버릇을 기르자ㅏㅏㅏ
 */

/*
과제
1. 클래스화
 슬라이드 빙고 월남뽕(카드게임)
 이것을 클래스화 시켜 구현
 동적할당 활용

2. 대전게임
 플레이어와 몬스터 각각 클래스 존재
 기본적으로 둘다 공격력 방어력 체력 존재
 멤버변수는 private 함수는 public
 종료조건 뒤지면 끝
*/