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
	Student(void) {
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��� �Ǿ����ϴ�." << endl;
	}
};

int main(void) {
	Student stu1;
	Student stu2 = Student();

}
