#include <iostream>
#include <windows.h>

using namespace std;

#pragma region 재귀함수
/*
재귀 함수(Recursion)
 프로그래밍에서 자기 자신을 호출하는 함수

개념
재귀 호출 (Recursive Call):
 함수 내에서 자기 자신을 호출하는 것입니다.
 재귀 함수는 종료 조건이 충족될 때까지 반복적으로 호출됩니다.
종료 조건 (Base Case):
 재귀 함수는 무한히 호출되지 않도록 종료 조건을 설정해야 합니다.
 종료 조건이 만족되면 재귀 호출이 멈춥니다.

*/
#pragma endregion

int factorial(int n)
{
	if (n <= 1) return 1;

	return n * factorial(n - 1);
}

// 하노이의 탑 알고리즘
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        std::cout << "원반 1을 " << from << "에서 " << to << "로 옮깁니다." << std::endl;
        return;
    }
    hanoi(n - 1, from, aux, to);
    std::cout << "원반 " << n << "을 " << from << "에서 " << to << "로 옮깁니다." << std::endl;
    hanoi(n - 1, aux, to, from);
}

int main()
{
	int num = 5;
	std::cout << num << "의 팩토리얼: " << factorial(num) << std::endl;

    int num_disks = 5; // 원반 개수
    hanoi(num_disks, 'A', 'C', 'B'); // A에서 C로 원반을 옮김
    cout << "▣" << endl;
}

/*
콘솔 프로젝트
 워드나 한글로 기능 정의서 만들기
 뭐뭐만들기 ~구현 ~한 기능입니다

 스케줄 정하기


*/