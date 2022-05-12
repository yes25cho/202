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
	Student* stu1 = new Student;
	stu1->show();
	Student* stu2 =new Student(1111, "JWP");
	stu2->show();
	delete stu1;
	delete stu2;
}
//Student::Student(int Hakbun, string name) {
//	this->nHakbun = Hakbun;
//	this->sName = name;
//	cout << "학번이 등록 되었습니다." << endl;
//}
Student::Student(int Hakbun, string name)
//객체 생성과 동시에 맴버변수 초기화	//멤버 변수(매개변수)
//const/참조형 멤버변수를 사용할 수 있다.
	:nHakbun(Hakbun), sName(name)
{
	this->nHakbun = Hakbun;
	this->sName = name;
	cout << "학번이 등록 되었습니다." << endl;
}
Student::Student(void) {
	this->nHakbun = 1234;
	this->sName = "이사랑";
	cout << "학번이 등록 되었습니다." << endl;
}
void Student::show(void) {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}
