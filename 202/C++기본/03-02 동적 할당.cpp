//cout, endl ��ü�� ������ ����
#include <iostream>		//cout, endl ��ü�� ������ ���� 

using namespace std;

int main(void){
	int* ptr1 = new int;		//int �� ���� �����Ҵ�
	*ptr1 = 20;
	cout << *ptr1<<endl;
	delete ptr1;
}
