//cout, endl ��ü�� ������ ����
#include <iostream>
//std::  �Ƚᵵ �ȴ�,.
using namespace std;

//pre�����Ϸ��� ó��
//�ڷ����� ������� ����
#define jegob(A) A*A

int main(void) 
{	//������ �켱���� ������ �ǵ�ġ ���� ����� ����
	cout << jegob(3+1) << endl;	//16
	cout << 3+1 * 3+1 << endl;	//7
	return 0;
}