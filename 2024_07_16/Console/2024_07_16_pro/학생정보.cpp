#include <iostream>

using namespace std;

/*
����



  ��ǥ
 3. ����ü�� Ȱ���� �л� ���� ����ϱ�
  �л� ������ ����ϴ� �Լ�
  �л� ������ �߰��ϴ� �Լ�
  ����������� �Ͻÿ�
*/

#pragma region �����Ҵ�� �����Ҵ��� ������
/*
 1. �����Ҵ�� �����Ҵ��� ������

 �ֿ� ������
�Ҵ� ����: �����Ҵ��� ������ ������, �����Ҵ��� ���� ������ �޸𸮰� �Ҵ�˴ϴ�12.
�޸� ��ġ: �����Ҵ��� ������ ���� �Ǵ� ���� ������, �����Ҵ��� �� ������ �޸𸮰� �Ҵ�˴ϴ�1.
������: �����Ҵ��� �޸� ũ�⸦ �������� ������ �� �־� �������� �����ϴ�1
*/
#pragma endregion

#pragma region Ŭ������ �����ΰ�
/*
 2. Ŭ������ �����ΰ�

 Ŭ������ ����ü�� ���� ������ �ϸ�
 ��� ������ ��� �Լ��� ���ϰ� �ִ�

 ���������ڸ� ���� ��� ������ �Լ��� ���� �����ϰų� �Ұ����ϰ� �� �� �ִ�
  public: ��� �ܺ� �ڵ忡�� ���� ����.
  private: Ŭ���� ���ο����� ���� ����.
  protected: Ŭ������ �� ���� Ŭ���������� ���� ����.

 �����ڸ� ���� ��ü�� �ʱ�ȭ �� �� �ִ�

 ĸ��ȭ (Encapsulation):
  Ŭ������ �����Ϳ� �Լ��� �ϳ��� ������ ����, �ܺο��� ������ ������ �� �ֽ��ϴ�.
  �̸� ���� �������� ���Ἲ�� ������ �� �ֽ��ϴ�.
 ��� (Inheritance):
  Ŭ������ �ٸ� Ŭ������ Ư���� ����� ��ӹ޾� ������ �� �ֽ��ϴ�.
  �̸� ���� �ڵ��� ���뼺�� ���� �� �ֽ��ϴ�.
 ������ (Polymorphism):
  ������ �������̽��� ���� ���� �ٸ� ������ ������ �� �ֽ��ϴ�.
  �ַ� ���� �Լ��� �Բ� ���˴ϴ�.
*/
#pragma endregion


struct Student
{
	string name;
	int gender;
	int age;
	int height;
	int weight;

	Student() 
	{
		cout << " �л��� �����Ǿ����ϴ� " << endl;
	}
	~Student()
	{
		cout << " �л��� �Ҹ�Ǿ����ϴ� " << endl;
	}

	void SetName(const string& _name)
	{
		name = _name;
	}
	void SetGender(const int& _gender)
	{
		gender = _gender;
	}
	void SetAge(const int& _age)
	{
		age = _age;
	}
	void SetHeight(const int& _height)
	{
		height = _height;
	}
	void SetWeight(const int& _weight)
	{
		weight = _weight;
	}
	
	string GetName()
	{
		return name;
	}
	int GetGender()
	{
		return gender;
	}
	int GetAge()
	{
		return age;
	}
	int GetHeight()
	{
		return height;
	}
	int GetWeight()
	{
		return weight;
	}

	void SetStudent()
	{
		string s_input;
		int i_input;
		while (true)
		{
			cout << endl;
			cout << "�л� �̸��� �Է��Ͻÿ�" << endl;
			cin >> s_input;

			if (!s_input.empty())
			{
				SetName(s_input);
				break;
			}

			cout << "�߸� �Է��Ͽ����ϴ�" << endl;
		}

		while (true)
		{
			cout << endl;
			cout << "�л� ������ �Է��Ͻÿ�" << endl;
			cout << "1 : ���� 2 : ����" << endl;
			cin >> i_input;

			if (i_input >= 1 && i_input <= 2)
			{
				SetGender(i_input);
				break;
			}

			cout << "�߸� �Է��Ͽ����ϴ�" << endl;
		}

		while (true)
		{
			cout << endl;
			cout << "�л� ���̸� �Է��Ͻÿ�" << endl;
			cin >> i_input;

			if (i_input >= 8 && i_input < 20)
			{
				SetAge(i_input);
				break;
			}

			cout << "�߸� �Է��Ͽ����ϴ�" << endl;
		}

		while (true)
		{
			cout << endl;
			cout << "�л� Ű�� �Է��Ͻÿ�" << endl;
			cin >> i_input;

			if (i_input > 0 && i_input < 200)
			{
				SetHeight(i_input);
				break;
			}

			cout << "�߸� �Է��Ͽ����ϴ�" << endl;
		}

		while (true)
		{
			cout << endl;
			cout << "�л� �����Ը� �Է��Ͻÿ�" << endl;
			cin >> i_input;

			if (i_input > 0 && i_input < 200)
			{
				SetWeight(i_input);
				break;
			}

			cout << "�߸� �Է��Ͽ����ϴ�" << endl;
		}
	}
	void GetStudent()
	{
		cout << "�л��� �̸��� " << GetName() << "�Դϴ�" << endl;
		cout << "�л��� ������ ";
		if(GetGender() == 1)
			cout << "���� �Դϴ�" << endl;
		else
			cout << "���� �Դϴ�" << endl;
		cout << "�л��� ���̴� " << GetAge() << "�Դϴ�" << endl;
		cout << "�л��� Ű�� " << GetHeight() << "�Դϴ�" << endl;
		cout << "�л��� �����Դ� " << GetWeight() << "�Դϴ�" << endl;
	}


};




int main()
{
	int b = 0;

	Student *A = new Student;
	A->SetStudent();
	A->GetStudent();

	delete A;
}