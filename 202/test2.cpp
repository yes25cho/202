#include <iostream>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	//������ �ۼ�
	CBank();
	CBank(string name, string account, int balance);
	//�ԱݵǴ� �ݾ��� ����ϴ� �Լ� �ۼ�
	void printBala();
};

CBank::CBank() {
	
}

CBank::CBank(string name, string account, int balance) 
	:name(name), account(account), balance(balance)
{
	
}

void CBank::printBala() {
	cout << "�ܾ� : " << balance << endl;
}

int main(void) {
	CBank cb = CBank("ȫ�浿", "1234566", 10000);
	cb.printBala();
	return 0;
}
