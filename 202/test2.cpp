#include <iostream>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	//생성자 작성
	CBank();
	CBank(string name, string account, int balance);
	//입금되는 금액을 출력하는 함수 작성
	void printBala();
};

CBank::CBank() {
	
}

CBank::CBank(string name, string account, int balance) 
	:name(name), account(account), balance(balance)
{
	
}

void CBank::printBala() {
	cout << "잔액 : " << balance << endl;
}

int main(void) {
	CBank cb = CBank("홍길동", "1234566", 10000);
	cb.printBala();
	return 0;
}
