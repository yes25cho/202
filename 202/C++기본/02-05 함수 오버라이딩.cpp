//cout, endl ��ü�� ������ ����
#include <iostream>
//std::  �Ƚᵵ �ȴ�,.
using namespace std;

//�Լ� �̸��� ����, �Ű������� �ٸ�(�Լ� �����ε�)
int jegob(int A, int B=1) {
	return A * A + B;
}

double jegob(double A, double B=1.1) 
{
	return A * A + B;
}

int main(void) 
{	
	cout <<jegob(4) << endl;		//jegob(4, 1)17
	cout << jegob(3.3) << endl;		//jegob(3.3, 1.1)11.99
	
	return 0;
}