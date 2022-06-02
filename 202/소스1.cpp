#include <iostream>
#include <string.h>

using namespace std;

class Person{
private:
	string sName;	//�̸�
protected:
	int nAge;		
public:
	Person();
	Person(string name, int age);
	void hi();
};

Person::Person() {
	sName = "�͸�";
	nAge = 0;
}

//Person::Person(string name, int age) {
//	this->sName = name;
//	this->nAge = age;
//}

Person::Person(string name, int age)
	:sName(name), nAge(age)
{

}

void Person:: hi() {
	cout << "�̸� : " << this->sName << endl;
	cout << "���� : " << this->nAge << endl;
}

class Student : private Person {
//private:
//	string sName;	//�̸�
//protected:
//	int nAge;
//public:
//	Person();
//	Person(string name, int age);
//	void hi();
private: 
	int nHakbun;//�й�
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
};

Student::Student() :Person(){
	nHakbun = 0;
}
Student::Student(string name, int age, int hakbun) 
	:Person(name, age), nHakbun(hakbun)
{
	
}

void Student::study() {
	hi();
//	this->sName = "ȫ�浿";	//private
	this->nAge = 0;
	cout << nAge << endl;
}

int main() {
	Person* person = new Person("�ѽ¿�", 100);
	person->hi();

	Student student;
	student.hi();
}