//cout, endl 객체를 가지고 있음
#include <iostream>
#include <string>

using namespace std;

class Student {
//private:
public:
	int nHakbun;
	string sName;
	Student(void);
	Student(int Hakbun, string name);
	void show(void);
};

int main(void) {
	Student stu1;
	stu1.show();
	Student stu2 = Student(1111, "JWP");
	stu2.show();
}
Student::Student(int Hakbun, string name) {
	nHakbun = Hakbun;
	sName = name;
	cout << "학번이 등록 되었습니다." << endl;
}
Student::Student(void) {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록 되었습니다." << endl;
}
void Student::show(void) {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}
