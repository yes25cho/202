//cout, endl ��ü�� ������ ����
#include <iostream>
//std::  �Ƚᵵ �ȴ�,.
using namespace std;

//pre�����Ϸ��� ó��
//�ڷ����� ������� ����
//#define jegob(A) ((A)*(A))

//�����Ϸ��� ó��
//�ڷ����� ���� ����
//������� ������
inline int jegob(int A) {
	return A * A;
}

int main(void) 
{	//������ �켱���� ������ �ǵ�ġ ���� ����� ����
	cout << jegob(3+1) << endl;	//16
	cout << (3+1) * (3+1) << endl;	//16
	return 0;
}