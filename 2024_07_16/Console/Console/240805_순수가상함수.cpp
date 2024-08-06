#include <iostream>

using namespace std;

#pragma region ���� ���� �Լ�
/*
���� ���� �Լ�(pure virtual function)
 ���� �ְ� ������ ���� ���� �Լ��Դϴ�.
 �̴� �ַ� �߻� Ŭ����(abstract class)���� ���Ǹ�, 
 �ش� �Լ��� �Ļ� Ŭ�������� �ݵ�� �������ϵ��� �����մϴ�.
 ���� ���� �Լ��� �Լ� ���� �ڿ� = 0�� �ٿ��� �����մϴ�.
 ���� �����Լ��� �Ѱ� �̻� �����Ѵٸ� �߻� Ŭ������ �ȴ�
 �߻�Ŭ���� : �ν��Ͻ�ȭ �� �� ���� �ٸ� Ŭ�������� ��ӹ޾ƾ��ϴ� �⺻ �������̽��� �⺻������ ����
 ������ �ڵ� ����ȭ
 Ư�� �Լ����� �ڽ�Ŭ������ ���� �����ǵ��� �����Ѵ�
*/
#pragma endregion


class AbstractBase
{
protected:
    string name;
    int health;
public:
    AbstractBase() {};
    AbstractBase(const string& n, const int h) : name(n), health(h){};
    ~AbstractBase();

    virtual void Attack() = 0; // ���� ���� �Լ�
    virtual void Takedamage() = 0; // ���� ���� �Լ�
};

class Derived : public AbstractBase
{
public:
    Derived() {};
    Derived(const string& n, const int h) : AbstractBase(n , h){};
    void Attack() override 
    { // ���� ���� �Լ� ������
        cout << "Derived class implementation" << endl;
    }
    void Takedamage() override
    { // ���� ���� �Լ� ������
        cout << "Derived class implementation" << endl;
    }
};

int main() {
    //AbstractBase a; ���������Լ��� �ܵ����� ������ �� ����
    //AbstractBase* a = new AbstractBase("����", 12); 
    AbstractBase* a = new Derived("����", 12);
    Derived * d = new Derived("�޽�", 202);
    a->Attack(); // Derived class implementation ���
    d->Attack();

    delete a;
    delete d;
    return 0;

}

/*
OOP Ư�� ���� 
��ü ���� ���α׷���(Object-Oriented Programming, OOP)
���Ϸ� ���� pdf

��ȣ���� ������ ���ϱ� ����
Ŭ���� ���漱��

�߻�Ŭ������ �̿��ؼ� Ȱ���� ������ ĳ���� Ŭ���� ����
 �⺻ ���� ������ �����Լ� ������ �Լ� ���

*/