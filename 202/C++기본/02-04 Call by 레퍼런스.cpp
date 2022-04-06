//cout, endl 객체를 가지고 있음
#include <iostream>
//std::  안써도 된다,.
using namespace std;
void plus2(int* num) {
	*num += 2;
}
int main(void) 
{	
	int a = 3;
	plus2(&a);
	cout << a << endl;

	return 0;

}