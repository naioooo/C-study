#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// - �̸�, ����, ����ó, �ּ�, �̸���, ����, ������� ȸ��, ������������, ���

class human {
public:
	string name;
	int age;
	string phone_number;
	string address;
	string email;
	string resolution; //����
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
	cout << "���� " << name << "�Դϴ�" << endl;
}
void human::Introduce_age() {
	cout << "���̴� " << age << "�Դϴ�" << endl;
}
void human::Introduce_phone_number() {
	cout << "����ó�� " << phone_number << "�Դϴ�" << endl;
}
void human::Introduce_address() {
	cout << "�ּ��� " << address << "�Դϴ�" << endl;
}
void human::Introduce_email() {
	cout << "�̸����� " << email << "�Դϴ�" << endl;
}
void human::Introduce_resolution() {
	cout << "������ " << resolution << "�Դϴ�" << endl;
}
void human::Introduce_company() {
	cout << "������� ȸ��� " << company << "�Դϴ�" << endl;
}
void human::Introduce_game() {
	cout << "�������� ������ " << game << "�Դϴ�" << endl;
}
void human::Introduce_hobby() {
	cout << "��̴� " << hobby << "�Դϴ�" << endl;
}

void human::Introduce_myself() {
	cout << "�ȳ��ϼ��� ";
	Introduce_name();
	Introduce_age();
	Introduce_phone_number();
	Introduce_address();
	Introduce_email();
	Introduce_resolution();
	Introduce_company();
	Introduce_game();
	Introduce_hobby();
	cout << "�����մϴ�" << endl;
}



int main()
{
	human mingyu;

	mingyu.name = "kim mingyu";
	mingyu.age = 27;
	mingyu.phone_number = "010-7663-8147";
	mingyu.address = "����� ������ �ϻ絿";
	mingyu.email = "alsrb1002@naver.com";
	mingyu.resolution = "ó������ �ٽ� ���Ӱ� ��������";
	mingyu.company = "���� �ʿ�� �ϴ� �� ���� �ؽ�������";
	mingyu.game = "�౸������ �����ϰ� �ͽ��ϴ�";
	mingyu.hobby = "�౸����, �丮, ����";

	cout << " �ڱ�Ұ� �ϱ� " << endl;

	while (true)
	{
		cout << " 1. �̸� 2. ���� 3. ����ó 4. �ּ� 5. �̸��� 6. ���� 7. ������� ȸ�� 8. ������������ 9. ��� 10. ��ü�Ұ� " << endl;

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