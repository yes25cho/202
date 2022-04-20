//cout, endl 객체를 가지고 있음
#include <iostream>
#include <string>

using namespace std;

class Student {
//private:
public:
	int nHakbun;
	string sName;
	
	//생성자 : 객체가 생성 될때 , 호출되는 함수
	//디폴트 생성자를 컴파일러가 만들어 준다
	//Student(){}
	Student(void) {
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록 되었습니다." << endl;
	}
};

int main(void) {
	Student stu1;
	Student stu2 = Student();

}
