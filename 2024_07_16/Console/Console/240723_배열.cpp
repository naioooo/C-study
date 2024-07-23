#include <iostream>
#include <time.h>
#include <random>

using namespace std;

#pragma region 배열
/*
배열이란
 같은 자료형을 가진 연속된 메모리 공간으로 이루어진 자료구조
 이런 배열은 같은 자료형을 가진 변수들이 여러개 필요할 때 사용
 많은 양의 데이터를 처리할 때 유용

배열의 선언법
 int(자료형) arr(배열의 이름) [32](배열의 크기);

배열의 초기화
 1. 크기를 명시하고 초기화 
  EX) int arr[3] = {1, 2, 3};
 2. 배열의 크기를 생략하고 초기화 
  EX) inat arr[] = {1, 2, 3};
 3. 크기를 명시적으로 지정 일부요소만 초기화
  EX) int arr[5] = {1, 2, 3};
 

*/
#pragma endregion

void arr_gugudan();
void arr_sum();


// 배열
int main()
{

	int num[3] = {1, 2, 3};

	//배열의 주소는 배열의 0번째 시작주소와 같다
	cout << "num[0]번째 데이터 : " << num[0] << endl;
	cout << "num[0]번의 주소값 : " << &num[0] << endl;
	cout << "num[1]번째 데이터 : " << num[1] << endl;
	cout << "num[1]번의 주소값 : " << &num[1] << endl;
	cout << "num[2]번째 데이터 : " << num[2] << endl;
	cout << "num[2]번의 주소값 : " << &num[2] << endl;

	cout << endl;

	// 포문을 이용한 배열 출력
	for (int i = 0; i < 3; i++)
	{
		cout << "num[" << i << "]번째 데이터 : " << num[i] << endl;
	}

	// 만약 10명의 학생 성적을 배열에 저장 / 총점과 평균은?


	/*
	int grade[10];
	for (int i = 0; i < 10; i++)
	{
		cout << i << "번째 학생 성적을 입력하시오 " << endl;
		cin >> grade[i];
	}

	int sum = 0;
	int average = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += grade[i];
	}
	average = sum / 10;

	cout << endl;
	cout << "반의 총점은 : " << sum << endl;
	cout << "반의 평균은 : " << average << endl;
	*/
	////

	int arr2[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr2[i][j] = i + j;
		}
	}

	cout << endl;


	for (int i = 0; i < 3; i++)
	{
		cout << i << "행 출력 결과 " << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << i << "행 " << j << "열 : " << arr2[i][j] << "  ";
		}
		cout << endl;
	}

	random_device rd;
	mt19937 gen(rd());
	cout << endl;

	arr_gugudan();
	arr_sum();


	for (int i = 0; i < 5; i++)
	{
		cout << gen() << endl;
	}


	return 0;
}


/*
 4교시 까지
 배열을 활용하기
  1. 인풋을 받아 입력받은 숫자의 구구단 계산결과을 배열에 저장 후 출력



  2. 다음 표에서 가로 합과 세로 합, 모든 수의 합을 구하라

   98 78 77 66 55
   84 ...
   82 ...
   86 ...         
   12 52 45 78 25

   과제
   사람 대 컴퓨터 숫자야구
    컴퓨터는 임의의 숫자 3개를 뽑는다
	사람은 차례대로 3개를 입력한다
	비교 
	종료조건 3out
	난수발생 범위는 1에서 10
	1~10이외에 숫자입력시 재입력받는다

*/

void arr_gugudan()
{
	//1. 인풋을 받아 입력받은 숫자의 구구단 계산결과을 배열에 저장 후 출력

	int input;
	int gugudan[10];

	cout << "구구단을 계산할 숫자를 입력하시오" << endl;
	cin >> input;

	cout << input << "단" << endl;
	for (int i = 0; i < 9; i++)
	{
		gugudan[i] = (i + 1) * input;
		cout << input << " * " << i + 1 << " = " << gugudan[i] << endl;
	}
	cout << endl;
}

void arr_sum()
{
	//   2. 다음 표에서 가로 합과 세로 합, 모든 수의 합을 구하라
	srand(time(NULL));

	int arr[5][5];
	int input_dir;
	int input_num;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 100 + 1;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	while (true)
	{
		cout << "가로합 : 1, 세로합 : 2 / 원하는 값을 입력하시오" << endl;
		cin >> input_dir;

		if (input_dir == 1 || input_dir == 2)
			break;
		else
			cout << "다시 입력하시오" << endl;
	}

	while (true)
	{
		cout << "1~5중 원하는 행이나 열을 입력하시오" << endl;
		cin >> input_num;

		if (input_num == 1 || input_num == 2 || input_num == 3 || input_num == 4 || input_num == 5)
			break;
		else
			cout << "다시 입력하시오" << endl;
	}
	

	for (int i = 0; i < 5; i++)
	{
		if (input_dir == 1)
		{
			sum += arr[input_num - 1][i];
		}
		else if (input_dir == 2)
		{
			sum += arr[i][input_num - 1];
		}
	}

	cout << endl;
	cout << "원하시는 값은 " << sum << "입니다" << endl;
}
