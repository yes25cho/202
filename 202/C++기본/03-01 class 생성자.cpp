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
	Student* stu = new Student[6];
	int i;
	for (i = 0; i < 6; i++) {
		//�迭�̹Ƿ� ->�� ���� �ʰ�, .���� ��� ����
		stu[i].show();
	}

	delete [] stu;
	return 0;
}
//Student::Student(int Hakbun, string name) {
//	this->nHakbun = Hakbun;
//	this->sName = name;
//	cout << "�й��� ��� �Ǿ����ϴ�." << endl;
//}
Student::Student(int Hakbun, string name)
//��ü ������ ���ÿ� �ɹ����� �ʱ�ȭ	//��� ����(�Ű�����)
//const/������ ��������� ����� �� �ִ�.
	:nHakbun(Hakbun), sName(name)
{
	this->nHakbun = Hakbun;
	this->sName = name;
	cout << "�й��� ��� �Ǿ����ϴ�." << endl;
}
Student::Student(void) {
	this->nHakbun = 1234;
	this->sName = "�̻��";
	cout << "�й��� ��� �Ǿ����ϴ�." << endl;
}
void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}
