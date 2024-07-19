#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;


/*
무언가를 구현할 떄는 

1. 필요한 기능을 미리 사용할 수 있게 복사를 해둔다
    프로그래머는 명령을 내리면 되고 복사는 컴퓨터가 수행
2. 지역을 구분해야한다
3. 내가 만들고자 하는 기능에 대해 지역별로 구분을 짓는다
4. 필요한 변수 생성
5. 생성한 변수 초기화
6. 만드는 로직에 맞춰 반복을 돌린다
7. 반복이 돌아가는 로직에서 프로그램 종료 하는 법 구현
*/

int main()
{
	srand(time(NULL));


	int number = 50;
	int mynumber = 0;

	while (true)
	{
		cout << "업다운 게임  숫자를 입력하시오" << endl;

		cin >> mynumber;

		Sleep(41);

		if (mynumber == number)
		{
			cout << "맞췄다" << endl;
			Sleep(41);
			system("cls");
		}
		else if (mynumber > number)
		{
			cout << " 더 크다" << endl;
		}
		else
		{
			cout << " 더 작다" << endl;
		}

	}

	return 0;
}