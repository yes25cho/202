#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() {
		cout <<"Animal »ý¼º"<< endl;
	}
	virtual ~Animal() {
		cout << "Animal ¼Ò¸ê" << endl;
	}
	virtual void eat() = 0;
	//roarÇÕ¼ö¸¦ °¡»ó ÇÔ¼ö Å×ÀÌºí¿¡ µî·Ï(µ¿Àû ¹ÙÀÎµù )
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
		cout << "Tiger »ý¼º" << endl;
	}
	virtual ~Tiger() {
		cout << "Tiger ¼Ò¸ê" << endl;
	}
	void roar(void) override { cout << "¾îÈï" << endl; }
	void eat(void) override { cout << "È£¶ûÀÌ ÂÁÂÁ" << endl; }
	void walk(void) override { cout << "¼ºÅ­¼ºÅ­" << endl; }
};

class Dog : public Animal {
public:
	Dog() {
		cout << "Dog »ý¼º" << endl;
	}
	virtual ~Dog() {
		cout << "Dog ¼Ò¸ê" << endl;
	}
	void roar(void) override { cout << "¸Û¸Û" << endl; }
	void eat(void) override { cout << "°­¾ÆÁö ÂÁÂÁ" << endl; }
	void walk(void) override { cout << "µµµµµµµµ" << endl; }
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