#include <iostream>

using namespace std;

#pragma region 포인터 배열
/*

Call by Value : 값에 의한 전달
개념: 인자의 값을 복사하여 함수에 전달합니다.
특징: 함수 내부에서 매개변수의 값을 변경해도 원본 인자의 값에는 영향을 미치지 않습니다.

Call by Reference : 
개념: 인자의 메모리 주소를 전달하여 함수가 원본 데이터를 직접 수정할 수 있게 합니다.
특징: 함수 내부에서 매개변수의 값을 변경하면 원본 인자의 값도 변경됩니다.




*/


#pragma endregion

void Value(int x) {
	x = 10; // x의 값만 변경됨
	cout << "x의 값 " << x << endl;
}

//참조에 의한 호출
// 함수 호출시 인수로 변수의 주소를 전달하는 방식
// 함수가 매개변수로 받은 참조를 통해 실제 인수의 값을 직접 수정가능
// 값을 복사하는 대신 주소를 전달 -> 메모리 성능효율이 좋다
// 구조체나 클래스나
void Address(int* x)
{
	*x = 10;
	cout << "x의 값 " << *x << endl;
}

void Reference(int& x) {
	x = 20; // x가 가리키는 원본 값이 변경됨
	cout << "x의 값 " << x << endl;
}

// 이형태는 전달이 아니라 복사의 형태이다
// 함수 내에서만 값이 변경이되고 main에서는 영향을 주지 않는다
void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SwapAddress(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SwapReference(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int arr[10] = { 1,2,5,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
		cout << &arr[i] << endl;
	}
	cout << endl;

	// 배열과 포인터의 관계
	// 포인터로도 배열 원소에 접근이 가능함
	// 배열 시작 부분을 가리키는 포인터 배열을 정의하고
	// 포인터에 1을 더하면 다음 원소를 가리키게 된다

	int* parr;
	parr = &arr[0]; // 포인터를 배열의 첫번째 요소의 주소를 저장
	
	for (int i = 0; i < 10; i++)
	{
		cout << *(parr + i) << " ";
	}

	cout << endl;
	int x = 5;

	
	Value(x);
	cout << "Value" << endl;
	cout << "x의 주소값 " << &x << endl;
	cout << "x의 값 " << x << endl;
	cout << endl;

	Address(&x);
	cout << "Address" << endl;
	cout << "x의 주소값 " << &x << endl;
	cout << "x의 값 " << x << endl;
	cout << endl;

	Reference(x);
	cout << "Reference" << endl;
	cout << "x의 주소값 " << &x << endl;
	cout << "x의 값 " << x << endl;
	cout << endl;


	int num1 = 10;
	int num2 = 20;
	
	Swap(num1, num2);
	cout << "Swap" << endl;
	cout << "1의 값 " << num1 << " 2의 값 " << num2 << endl;
	cout << endl;
	SwapAddress(&num1, &num2);
	cout << "SwapAddress" << endl;
	cout << "1의 값 " << num1 << " 2의 값 " << num2 << endl;
	cout << endl;
	SwapReference(num1, num2);
	cout << "SwapReference" << endl;
	cout << "1의 값 " << num1 << " 2의 값 " << num2 << endl;
	cout << endl;


	/*
	void 포인터
	 자료형이 없는 포인터 변수
	 자료형의 제약을 받지 않고 어떤 자료형의 주소든 저장가능]
	 값을 참조하려면 강제로 형변환 해야함

	*/

	void* vp = nullptr;
	int i = 3;
	double d = 3.1f;

	vp = &i;

	cout << *(int*)vp << endl;
	cout << vp << endl;
	cout << &vp << endl;
}

/*

c -> malloc free
c++ -> new delete

삭제후 널포인터로 지정


과제
 1. 정적할당과 동적할당의 차이점
 2. 클래스란 무엇인가
  발표
 3. 구조체를 활용한 학생 정보 출력하기
  학생 정보를 출력하는 함수 
  학생 정보를 추가하는 함수
  참조방식으로 하시오
*/