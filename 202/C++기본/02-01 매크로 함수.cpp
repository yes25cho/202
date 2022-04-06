//cout, endl 객체를 가지고 있음
#include <iostream>
//std::  안써도 된다,.
using namespace std;

//pre컴파일러가 처리
//자료형에 영향받지 않음
#define jegob(A) A*A

int main(void) 
{
	cout << jegob(3) << endl;
	cout << 3 * 3 << endl;
	return 0;
}