#include <iostream>

using namespace std;

#pragma region 순수 가상 함수
/*
순수 가상 함수(pure virtual function)
 선언만 있고 구현이 없는 가상 함수입니다.
 이는 주로 추상 클래스(abstract class)에서 사용되며, 
 해당 함수를 파생 클래스에서 반드시 재정의하도록 강제합니다.
 순수 가상 함수는 함수 선언 뒤에 = 0을 붙여서 정의합니다.
 순수 가상함수를 한개 이상 포함한다면 추상 클래스가 된다
 추상클래스 : 인스턴스화 할 수 없다 다른 클래스들이 상속받아야하는 기본 인터페이스나 기본동작을 정의
 다형성 코드 재사용화
 특정 함수들이 자식클래스에 의해 구현되도록 강제한다
*/
#pragma endregion


class AbstractBase
{
protected:
    string name;
    int health;
public:
    AbstractBase() {};
    AbstractBase(const string& n, const int h) : name(n), health(h){};
    ~AbstractBase();

    virtual void Attack() = 0; // 순수 가상 함수
    virtual void Takedamage() = 0; // 순수 가상 함수
};

class Derived : public AbstractBase
{
public:
    Derived() {};
    Derived(const string& n, const int h) : AbstractBase(n , h){};
    void Attack() override 
    { // 순수 가상 함수 재정의
        cout << "Derived class implementation" << endl;
    }
    void Takedamage() override
    { // 순수 가상 함수 재정의
        cout << "Derived class implementation" << endl;
    }
};

int main() {
    //AbstractBase a; 순수가상함수는 단독으로 생성할 수 없다
    //AbstractBase* a = new AbstractBase("날두", 12); 
    AbstractBase* a = new Derived("날두", 12);
    Derived * d = new Derived("메시", 202);
    a->Attack(); // Derived class implementation 출력
    d->Attack();

    delete a;
    delete d;
    return 0;

}

/*
OOP 특성 조사 
객체 지향 프로그래밍(Object-Oriented Programming, OOP)
파일로 제출 pdf

상호참조 오류를 피하기 위해
클래스 전방선언

추상클래스를 이용해서 활용한 세가지 캐릭터 클래스 구현
 기본 스탯 움직임 공격함수 데미지 함수 등등

*/