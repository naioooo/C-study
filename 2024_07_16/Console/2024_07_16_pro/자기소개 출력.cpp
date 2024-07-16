#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// - 이름, 나이, 연락처, 주소, 이메일, 각오, 가고싶은 회사, 만들고싶은게임, 취미

class human {
public:
	string name;
	int age;
	string phone_number;
	string address;
	string email;
	string resolution; //각오
	string company;
	string game;
	string hobby;

	void Introduce_name();
	void Introduce_age();
	void Introduce_phone_number();
	void Introduce_address();
	void Introduce_email();
	void Introduce_resolution();
	void Introduce_company();
	void Introduce_game();
	void Introduce_hobby();
	void Introduce_myself();
};

void human::Introduce_name() {
	cout << "저는 " << name << "입니다" << endl;
}
void human::Introduce_age() {
	cout << "나이는 " << age << "입니다" << endl;
}
void human::Introduce_phone_number() {
	cout << "연락처는 " << phone_number << "입니다" << endl;
}
void human::Introduce_address() {
	cout << "주소은 " << address << "입니다" << endl;
}
void human::Introduce_email() {
	cout << "이메일은 " << email << "입니다" << endl;
}
void human::Introduce_resolution() {
	cout << "각오는 " << resolution << "입니다" << endl;
}
void human::Introduce_company() {
	cout << "가고싶은 회사는 " << company << "입니다" << endl;
}
void human::Introduce_game() {
	cout << "만들고싶은 게임은 " << game << "입니다" << endl;
}
void human::Introduce_hobby() {
	cout << "취미는 " << hobby << "입니다" << endl;
}

void human::Introduce_myself() {
	cout << "안녕하세요 ";
	Introduce_name();
	Introduce_age();
	Introduce_phone_number();
	Introduce_address();
	Introduce_email();
	Introduce_resolution();
	Introduce_company();
	Introduce_game();
	Introduce_hobby();
	cout << "감사합니다" << endl;
}



int main()
{
	human mingyu;

	mingyu.name = "kim mingyu";
	mingyu.age = 27;
	mingyu.phone_number = "010-7663-8147";
	mingyu.address = "서울시 강동구 암사동";
	mingyu.email = "alsrb1002@naver.com";
	mingyu.resolution = "처음부터 다시 새롭게 공부하자";
	mingyu.company = "나를 필요로 하는 곳 어디든 넥슨같은곳";
	mingyu.game = "축구게임을 개발하고 싶습니다";
	mingyu.hobby = "축구보기, 요리, 쇼핑";

	cout << " 자기소개 하기 " << endl;

	while (true)
	{
		cout << " 1. 이름 2. 나이 3. 연락처 4. 주소 5. 이메일 6. 각오 7. 가고싶은 회사 8. 만들고싶은게임 9. 취미 10. 전체소개 " << endl;

		cout << endl;
		int input;
		cin >> input;

		switch (input)
		{
		case 1:
			mingyu.Introduce_name();
			break;
		case 2:
			mingyu.Introduce_age();
			break;
		case 3:
			mingyu.Introduce_phone_number();
			break;
		case 4:
			mingyu.Introduce_address();
			break;
		case 5:
			mingyu.Introduce_email();
			break;
		case 6:
			mingyu.Introduce_resolution();
			break;
		case 7:
			mingyu.Introduce_company();
			break;
		case 8:
			mingyu.Introduce_game();
			break;
		case 9:
			mingyu.Introduce_hobby();
			break;
		case 10:
			mingyu.Introduce_myself();
			break;

		}
		cout << endl;
	}
	return 0;
}