//cout, endl ��ü�� ������ ����
#include <iostream>
//std::  �Ƚᵵ �ȴ�,.
using namespace std;

//�Լ� �̸��� ����, �Ű������� �ٸ�(�Լ� �����ε�)
int jegob(int A, int B) {
	return A * A + B;
}
double jegob(double A, double B) 
{
	return A * A + B;
}

int main(void) 
{	
	cout <<jegob(4, 1) << endl;		//17
	cout << jegob(3.3, 1.1) << endl;		//11.99
	
	return 0;
}