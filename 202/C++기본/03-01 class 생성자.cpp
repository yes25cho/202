//cout, endl ��ü�� ������ ����
#include <iostream>
#include <string>

using namespace std;

class Student {
//private:
public:
	int nHakbun;
	string sName;
	
	//������ : ��ü�� ���� �ɶ� , ȣ��Ǵ� �Լ�
	//����Ʈ �����ڸ� �����Ϸ��� ����� �ش�
	//Student(){}
	Student(void);
	void show(void);
};

int main(void) {
	Student stu1;
	stu1.show();
	Student stu2 = Student();
	stu2.show();
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