//cout, endl ��ü�� ������ ����
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
	cout << "�й��� ��� �Ǿ����ϴ�." << endl;
}
Student::Student(void) {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��� �Ǿ����ϴ�." << endl;
}
void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}
