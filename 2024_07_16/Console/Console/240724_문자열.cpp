#include <iostream>
#include <string>

using namespace std;




int main()
{
	// ���׿�����
	// ���� ? ���� ���� �� : ������ ���� ��; 

	int a = 10;
	int b = 20;
	int max = (a > b) ? a : b; // a�� b �� �� ū ���� max�� �Ҵ�


	char c = 'a';
	char h[3] = { '��' ,};
	char d[3] = "1 ";

	char as[] = "hello piece";

	cout << as << endl;
	cout << sizeof(as) << endl;

    /*
	//strcpy: ���ڿ� ����
    char dest1[20];
    char src1[] = "Hello, World!";
    strcpy(dest1, src1);
        
    //strcat: ���ڿ� ����
    //strcat_s: �����÷ο찰�� ������ �����ϴ� ����
    char dest2[30] = "Hello, ";
    char src2[] = "World!";
    strcat(dest2, src2);
    
    //strlen: ���ڿ� ���� ���
    char str3[] = "Hello, World!";
    size_t length = strlen(str3);
    
    //strcmp: ���ڿ� ��
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);
    
    //strncpy: ������ ���̸�ŭ ���ڿ� ����
    char dest[20];
    char src[] = "Hello, World!";
    strncpy(dest, src, 5); // dest���� "Hello"�� �����
    
    //strncat: ������ ���̸�ŭ ���ڿ� ����
    char dest[30] = "Hello, ";
    char src[] = "World!";
    strncat(dest, src, 3); // dest���� "Hello, Wor"�� �����
    
    //strchr: Ư�� ���� ã��
    char str[] = "Hello, World!";
    char* ptr = strchr(str, 'W'); // 'W'�� ��ġ�� ����Ű�� ������ ��ȯ
    
    //strstr: Ư�� ���ڿ� ã��
    char str[] = "Hello, World!";
    char* ptr = strstr(str, "World"); // "World"�� ���� ��ġ�� ����Ű�� ������ ��ȯ
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
    if (str1 == str3) cout << "���� " << endl;

    string substr = str.substr(7, 5);
    cout << substr << endl;

    str.replace(7, 5, "c++");
    cout << str << endl;

    str.erase();

	return 0;
}
