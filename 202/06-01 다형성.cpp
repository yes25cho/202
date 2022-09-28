#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() {
		cout <<"Animal ����"<< endl;
	}
	virtual ~Animal() {
		cout << "Animal �Ҹ�" << endl;
	}
	virtual void eat() = 0;
	//roar�ռ��� ���� �Լ� ���̺� ���(���� ���ε� )
	virtual void roar() = 0;
	virtual void walk() = 0;
private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() {
		cout << "Tiger ����" << endl;
	}
	virtual ~Tiger() {
		cout << "Tiger �Ҹ�" << endl;
	}
	void roar(void) override { cout << "����" << endl; }
	void eat(void) override { cout << "ȣ���� ����" << endl; }
	void walk(void) override { cout << "��ŭ��ŭ" << endl; }
};

class Dog : public Animal {
public:
	Dog() {
		cout << "Dog ����" << endl;
	}
	virtual ~Dog() {
		cout << "Dog �Ҹ�" << endl;
	}
	void roar(void) override { cout << "�۸�" << endl; }
	void eat(void) override { cout << "������ ����" << endl; }
	void walk(void) override { cout << "��������" << endl; }
};

void main(void)
{
	Animal* tiger = new Tiger;
	tiger->roar();
	delete tiger;

	Animal* dog = new Dog;
	dog->roar();
	delete dog;

}