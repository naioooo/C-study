#include <iostream>

using namespace std;

#pragma region 조건문
/*

조건문
 프로그램이 실행되는 동안 경우의 수에 맞춰서 서로 다른 결과를 도출하기 위한 문법
 조건문을 이용하면 다양한 결과를 출력하는 프로그램 작성 가능
 
 C/C++ 언어의 조건문 종류
  1. if - else 조건문
   조건적 실행(조건에 따라 실행 유무)
   조건을 만족하는 if문을 발견하면 나머지는 건너 뛴다
   또한 if와 else가 만나서 이루는 문장수는 1개이다
   if~else 문에서 조건의 만족여부 검사는 위에서 아래로 절차지향적으로 진행
   조건이 만족되어 해당 블록을 실행하면 마지막 else까지 건너뛴다
   조건이 성립되지 않을 시 마지막의 else문 실행

   if(조건식)
   {
   }
   else if(조건식)
   {
   }
   else
   {
   }

   bool과의 조합에 주의해야한다 -> 남발?   

  2. swtich - case 조건문
   스위치 문을 사용하는 경우는 일일이 조건별로 세팅이 용이
   조건이 많을 시 좋은 효율을 낸다
   if문과 매우 흡사하며 if문으로 전부 대체가 가능하다
   데이터 타입에는 int char 가 가능하다

   switch(Data Type)
   {
       case 1:
       case 2:
       .
       .
   }

   스위치문은 인자 값에 따라 실행할 영역이 결정된다
    들어오는 값이 1이면 case 1: 이 실행이 된다
   
   스위치 ~ 케이스의 조건문의 디폴트는 if~else 조건문의 else문에 해당하는 역할 수행

   스위치 ~ 케이스 조건문은 if ~ else 조건문과 범위에 해당하는 조건을 줄 수 없을 뿐만 아니라
   조건문으로 사용 할 수 있는 자료형은 정수형에 해당한다 ( 정수 이외의 조건을 줄 경우 올바른 결과를 출력불가)
 
 C/C++ 언어의 제어문 종류

 1. return
  조건문 일때는 다시 돌려 보낸다/ 함수에서는 값을 반환하고 초기화
 2. continue
  조건문 일때는 연산하지않고 건너 뛴다 / while문에서는 바로 이전 문항
 3. break
  만나면 멈춘다 / 반복문에서는 반복문을 빠져 나온다
 4. goto
  점프문 / goto 라벨을 지정하면 코드를 건너뛰고 해당 라벨로 이동
 




*/
#pragma endregion


int main()
{
    /*
    int nOper;

    cout << "숫자입력" << endl;
    cin >> nOper;

    if (nOper == 0)
    {
        cout << "첫번째 게임" << endl;
    }
    else if (nOper == 1)
    {
        cout << "두번째 게임" << endl;
    }
    else 
    {
        cout << "세번째 게임" << endl;
    }

    cout << endl;
    */


    int input;

    cout << "숫자입력" << endl;
    cin >> input;

    // 단일사용 보단 짝궁에 맞게 사용
    switch (input)
    {

    case 0:
        cout << "0번 입력" << endl;
        break;

    case 1:
        cout << "1번 입력" << endl;
        break;

    case 2:
        cout << "2번 입력" << endl;
        break;

    default:
        cout << "잘못 입력" << endl;
        break;
    }



    /*
    
    c/C++ 언어 증감 연산자 종류

    전휘 증감 연산자
    후위 증감 연산자

    전위 증감 연산자 변수의 값을 증감 후 연산에 활용
    후위 증감 연산자는 연산 후에 변수의 값 증감
       
    */

    int nValue = 10;

    cout << "증감에 대한 연산 결과" << endl;

    cout << ++nValue << endl;
    cout << --nValue << endl;
    cout << nValue++ << endl;
    cout << nValue-- << endl;
    
    cout << "nValue의 값" << nValue <<  endl;
    
    cout <<  endl;

    int A, B, C, D;
    A = B = C = D= 10;

    if ((A == B++) && (C++ < ++D))
    {
        cout << "A의 값" << A << endl;
        cout << "B의 값" << B << endl;
        cout << "C의 값" << C << endl;
        cout << "D의 값" << D << endl;
    }


    /*
    goto
     사용시 주의가 필요한 문법
      가독성을 해치고 스파게티 코드에 일조
       사용시 써야할 경우에만 사용

     goto label
     
    */
   

    for (int i = 2; i < 10; i += 1)
    {
        for (int j = 2; j < 10; j += 1)
        {
            cout << i << " x " << j << " = " << i * j << endl;
            
            goto EXIT;
        }
    }

EXIT:


    
	return 0;
}

/*

과제

1. 가위바위보 만들기
 if문을 사용해서 만든다
  스위치문 X
 게임의 진행 횟수는 총 5판
  이후는 게임 종료 
 필수 : 치트
 - 코드를 최대한 간결하게

2. 일수 출력기
 if문과 switch문 중에 골라서 사용
 시작하면 사용자의 입력을 받고 숫자에 따리 ??일인지 출력
 EX) 4를입력시 -> 4월은 30일 까지 있습니다 -> 다시 입력커맨드
 1~12월 까지 확인 가능해야하고 예외처리 진행
 총5번을 입력하면 프로그램 종료

도전과제
 함수와 포인터를 활용한 가위바위보

 한줄조사 함수
  노트에 적어온다
  비유할 것 생각해온다 
*/

/*
void Function(int* a, int** b, int*** c)
{
    내용작성
}

void main()
{
    Function(a,b,c)
}
*/
