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
	cout << "�Ϲݻ����� ȣ��" << endl;
	int len = strlen(Name) + 1;
	cout << "len" << endl;
	sName = new char[len];
	cout << "sName ���� �Ҵ�" << endl;
	strcpy(sName, Name);
	cout << "�����ڳ�" << endl;
}
Student::~Student() 
{
	cout << "�Ҹ��� ȣ��" << endl;
}
int main(void) 
{
	Student stu1 = Student(1111, "JWP");
	cout << "���� ��" << endl;
	return 0;
}
