//cout, endl ��ü�� ������ ����
#include <iostream>
//std::  �Ƚᵵ �ȴ�,.
using namespace std;

int main(void) 
{	
	int a, in;

	int* p = &in;

	//������ a���� �ٲ�
	int& ra = a;
	ra = 30;
	cout << a << endl;	//
	
	in = 10;
	cout << *p << endl;
}