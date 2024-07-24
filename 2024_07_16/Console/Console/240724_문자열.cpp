#include <iostream>
#include <string>

using namespace std;




int main()
{
	// 삼항연산자
	// 조건 ? 참일 때의 값 : 거짓일 때의 값; 

	int a = 10;
	int b = 20;
	int max = (a > b) ? a : b; // a와 b 중 더 큰 값을 max에 할당


	char c = 'a';
	char h[3] = { 'ㅁ' ,};
	char d[3] = "1 ";

	char as[] = "hello piece";

	cout << as << endl;
	cout << sizeof(as) << endl;

    /*
	//strcpy: 문자열 복사
    char dest1[20];
    char src1[] = "Hello, World!";
    strcpy(dest1, src1);
        
    //strcat: 문자열 연결
    //strcat_s: 오버플로우같은 문제를 방지하는 연결
    char dest2[30] = "Hello, ";
    char src2[] = "World!";
    strcat(dest2, src2);
    
    //strlen: 문자열 길이 계산
    char str3[] = "Hello, World!";
    size_t length = strlen(str3);
    
    //strcmp: 문자열 비교
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);
    
    //strncpy: 지정된 길이만큼 문자열 복사
    char dest[20];
    char src[] = "Hello, World!";
    strncpy(dest, src, 5); // dest에는 "Hello"가 저장됨
    
    //strncat: 지정된 길이만큼 문자열 연결
    char dest[30] = "Hello, ";
    char src[] = "World!";
    strncat(dest, src, 3); // dest에는 "Hello, Wor"가 저장됨
    
    //strchr: 특정 문자 찾기
    char str[] = "Hello, World!";
    char* ptr = strchr(str, 'W'); // 'W'의 위치를 가리키는 포인터 반환
    
    //strstr: 특정 문자열 찾기
    char str[] = "Hello, World!";
    char* ptr = strstr(str, "World"); // "World"의 시작 위치를 가리키는 포인터 반환
    */

    //=======================================================================
    //string

    string str = "Hello, World!";    
    cout << str.length() << endl;
   
    string copy = str;
    cout << copy << endl;

    string str1 = "Hello ";
    string str2 = "World";
    cout << str1 + str2 << endl;

    string str3 = "Hello ";
    if (str1 == str3) cout << "같다 " << endl;

    string substr = str.substr(7, 5);
    cout << substr << endl;

    str.replace(7, 5, "c++");
    cout << str << endl;

    str.erase();

	return 0;
}
