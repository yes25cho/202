#include <iostream>
#include <string.h>

using namespace std;

class Person{
private:
	string sName;	//이름
protected:
	int nAge;		
public:
	Person();
	Person(string name, int age);
	void hi();
};

Person::Person() {
	sName = "익명";
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
	cout << "이름 : " << this->sName << endl;
	cout << "나이 : " << this->nAge << endl;
}

class Student : private Person {
//private:
//	string sName;	//이름
//protected:
//	int nAge;
//public:
//	Person();
//	Person(string name, int age);
//	void hi();
private: 
	int nHakbun;//학번
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
//	this->sName = "홍길동";	//private
	this->nAge = 0;
	cout << nAge << endl;
}

int main() {
	Person* person = new Person("한승원", 100);
	person->hi();

	Student student;
	student.hi();
}