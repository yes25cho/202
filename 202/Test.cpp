#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	string pname;
	int phakbun;
	Person(string name ,int hakbun);
	void PrintShow();
};

class Student : public Person {
public:
	string university;
	Student(string name, int shakbun, string university)
		: Person(name, shakbun) {
		this->university = university;
	};
	void PrintShow();
};

//Person 메소드 구현
Person::Person(string name, int hakbun)
	:pname(name), phakbun(hakbun){
}

void Person::PrintShow() {
	cout << pname << ", " << phakbun <<endl;
}


void Student::PrintShow() {
	cout << pname << ", " << phakbun << ", " <<university<<endl;
}


int main(void) {
	Person ps = Person("조예서", 18);
	ps.PrintShow();
	Student st = Student("조예서", 18, "ㅇㅇ");
	st.PrintShow();
}