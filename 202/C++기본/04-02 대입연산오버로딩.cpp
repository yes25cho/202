#include <iostream> // cout, endl ��ü�� ������ ����
#include <string>	// string Ŭ������ ������ ����

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// ������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student(void);
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);

	// �Ҹ��� : ��ü�� �޸𸮿��� ������ ��, ȣ��Ǵ� �Լ�
	~Student();
	Student& operator=(const Student& rhs);

	void show(void);
};


int main(void)
{
	// �Ϲݻ����� ȣ��
	Student stu1 = Student(1111, "JWP");

	// ��������� ȣ��
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
// ��ü������ ���ÿ� ������� �ʱ�ȭ // �������(�Ű�����)
// const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	int len = strlen(Name) + 1;		// �������� ����
	sName = new char[len];			// ��������

	strcpy(sName, Name);
	cout << "�Ϲݻ����� ȣ��" << endl;
}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun)
{
	sName = new char[strlen(rhs.sName) + 1];
	strcpy(this->sName, rhs.sName);
	cout << "��������� ȣ��" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show(void)
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}

Student& Student::operator=(const Student& rhs) {
	cout << "���Կ����� ȣ��" << endl;

	//������ ���� �ϴ� ������ �����ϰ� ������ �״� �غ�
	delete[]sName;

	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;		// �������� ����
	sName = new char[len];			// ��������
	strcpy(sName, rhs.sName);
	return *this;
}