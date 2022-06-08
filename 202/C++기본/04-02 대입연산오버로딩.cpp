#include <iostream> // cout, endl 객체를 가지고 있음
#include <string>	// string 클래스를 가지고 있음

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// 생성자 : 객체가 생성될 때, 호출되는 함수
	Student(void);
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);

	// 소멸자 : 객체가 메모리에서 해제될 때, 호출되는 함수
	~Student();
	Student& operator=(const Student& rhs);

	void show(void);
};


int main(void)
{
	// 일반생성자 호출
	Student stu1 = Student(1111, "JWP");

	// 복사생성자 호출
	Student stu3 = Student(2222, "JYP");
	stu1.show();

	Student stu2 = stu1;
	stu2.show();

	stu1.operator= (stu3);
	stu1.show();

	return 0;
}


Student::Student(void)
{
}

Student::Student(int Hakbun, const char* Name)
// 객체생성과 동시에 멤버변수 초기화 // 멤버변수(매개변수)
// const/참조형 멤버변수를 사용할 수 있다.
	: nHakbun(Hakbun)
{
	int len = strlen(Name) + 1;		// 공간개수 측정
	sName = new char[len];			// 공간생성

	strcpy(sName, Name);
	cout << "일반생성자 호출" << endl;
}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun)
{
	sName = new char[strlen(rhs.sName) + 1];
	strcpy(this->sName, rhs.sName);
	cout << "복사생성자 호출" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "소멸자 호출" << endl;
}

void Student::show(void)
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}

Student& Student::operator=(const Student& rhs) {
	cout << "대입연산자 호출" << endl;

	//기존에 존재 하는 공간을 제고하고 새공간 항당 준비
	delete[]sName;

	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;		// 공간개수 측정
	sName = new char[len];			// 공간생성
	strcpy(sName, rhs.sName);
	return *this;
}