#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat(void) { cout << "동물 먹어" << endl; }
	//roar합수를 가상 함수 테이블에 등록(동적 바인딩 )
	virtual void roar(void) { cout << "동물 짖어" << endl; }
	void walk(void) { cout << "동물 걸어" << endl; }
private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) override { cout << "어흥" << endl; }
	
};

class Dog : public Animal {
public:
	void roar(void) override { cout << "멍멍" << endl; }
};

void main(void)
{
	Animal* animal = new Animal();
	animal->roar();
	delete animal;

	Tiger* tiger = new Tiger;
	tiger->roar();
	delete tiger;

	Dog* dog = new Dog();
	dog->roar();

}