#include <iostream>

using namespace std;

class CPerson {
private:
	string name;
	int age;
public:
	CPerson();
	CPerson(string name, int age);
	~CPerson();
};

CPerson::CPerson(){
}

CPerson::CPerson(string name, int age) 
{
	this->name = name;
	this->age = age;
}
CPerson::~CPerson() {}
int main(void) {
	CPerson cp = CPerson("ȫ�浿", 33);
	return 0; 
}