//cout, endl 객체를 가지고 있음
#include <iostream>
//std::  안써도 된다,.
using namespace std;

int main(void) 
{	
	int a, in;

	int* p = &in;

	//참조로 a값을 바꿈
	int& ra = a;
	ra = 30;
	cout << a << endl;	//
	
	in = 10;
	cout << *p << endl;
}