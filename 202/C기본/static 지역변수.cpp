#include <iostream>
using namespace std;

void jiyuk(void) {
	//지역변수는 함수 호출이 끝나면 사라짐
	int a = 0;
	cout << "정적변수 a는 " << a << endl;
}

int main(void) {
	jiyuk();
	jiyuk();
}