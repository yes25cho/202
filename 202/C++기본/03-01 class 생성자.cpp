//cout, endl ��ü�� ������ ����
#include <iostream>
#include <string.h>

using namespace std;

class Student {
//private:
public:
	int nHakbun;
	//string sName;
	char* sName;
	Student(int Hakbun, const char* name);
	~Student();
	void show(void);
};

int main(void) {
	Student stu1 =  Student(1111, "JWP");
	stu1.show();

	return 0;
}
//Student::Student(int Hakbun, string name) {
//	this->nHakbun = Hakbun;
//	this->sName = name;
//	cout << "�й��� ��� �Ǿ����ϴ�." << endl;
//}



Student::Student(int Hakbun, const char* name)
//��ü ������ ���ÿ� �ɹ����� �ʱ�ȭ	//��� ����(�Ű�����)
//const/������ ��������� ����� �� �ִ�.
	:nHakbun(Hakbun)
{
	cout << "�Ϲ� ������ ȣ��" << endl;
	int len = strlen(name) + 1;		//�����Ҵ��� ������ ũ�⸦ ���ϰ�
	sName = new char[len];			//�� ũ�⸸ƴ �迭�� ���� �Ҵ�
	strcpy(sName,name);				//�Ű������� �ִ� ���ڿ� ����
}

Student::~Student() {
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show(void) {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}
