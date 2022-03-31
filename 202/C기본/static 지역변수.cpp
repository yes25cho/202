#include <iostream>
using namespace std;

void jungjuk(void) {
	// 정적 지역변수는 선언 되는 순간부터 계속 유지
	static int a = 0;
	cout << "정적 지역변수 a는 " << a << endl; 
	a++;
}

int main(void) {
	jungjuk();
	jungjuk();
	jungjuk();
}
