
#include <iostream>
#include <vector>

using namespace std;

class Weapon
{
private:
	string name;
	int damage;

public:
	Weapon() {};
	Weapon(const string& n, const int d) : name(n), damage(d) {};
	~Weapon() {
	}

	void Print()const
	{
		cout << "�̸� : " << name << " ���ݷ� : " << damage << endl;
	}

};


void print_vec(vector<int> vec)
{
	for (const auto& v : vec)
	{
		cout << v << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);

	print_vec(vec);
	cout << "vector�� capacity: " << vec.capacity() << endl;
	vec.clear();
	print_vec(vec);
	cout << "vector�� capacity: " << vec.capacity() << endl;
	vec.shrink_to_fit();
	print_vec(vec);
	cout << "vector�� capacity: " << vec.capacity() << endl;


	vector<Weapon> weapon;

	weapon.push_back(Weapon("����", 5));
	weapon.push_back(Weapon("Ȱ", 3));
	weapon.push_back(Weapon("���", 4));
	weapon.push_back(Weapon("�ܰ�", 1));

	for (const auto& w : weapon)
	{
		w.Print();
	}

	vector<shared_ptr<Weapon>> weapon_ptr;


	weapon_ptr.push_back(make_shared<Weapon>("����", 5));
	weapon_ptr.push_back(make_shared<Weapon>("Ȱ", 3));
	weapon_ptr.push_back(make_shared<Weapon>("���", 4));
	weapon_ptr.push_back(make_shared<Weapon>("�ܰ�", 1));

	for (const auto& w : weapon_ptr)
	{
		w->Print();
	}
}

/*

1. �ƹ��ų� Ŭ���� ���� ���Ϳ� ������ ���
2. �����ý���
 shop Ŭ���� item Ŭ���� 
 ĳ���� Ŭ���� -> �κ��丮 Ŭ����
 �����۱��� -> ���� ���� -> ������ �κ��丮�� �̵�
 �κ��丮 -> ���ȱ� -> ���� ��´�
 �κ��丮������ ���� �� Ż���� �����ؾ��Ѵ�
 ��������
 �������� ���� ĳ������ ����â 



*/