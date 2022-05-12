//cout, endl 객체를 가지고 있음
#include <iostream>		//cout, endl 객체를 가지고 있음 

using namespace std;

int main(void){
	int* ptr1 = new int;		//int 형 공간 동적할당
	*ptr1 = 20;
	cout << *ptr1<<endl;
	delete ptr1;
}
