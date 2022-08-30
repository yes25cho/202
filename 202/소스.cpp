#include <iostream>
#include <string.h>
using namespace std;

class Student {
private:
	int nHakbun;
	char* sName;
public:
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	void show();
	~Student();
};
Student::Student(int Hakbun, const char* Name)
	:nHakbun(Hakbun)
{
	cout << "일반생성자 호출" << endl;
	int len = strlen(Name) + 1;
	cout << "len" << endl;
	sName = new char[len];
	cout << "sName 동적 할당" << endl;
	strcpy(sName, Name);
	cout << "생성자끝" << endl;
}
Student::~Student() 
{
	cout << "소멸자 호출" << endl;
}
int main(void) 
{
	Student stu1 = Student(1111, "JWP");
	cout << "매인 끝" << endl;
	return 0;
}
