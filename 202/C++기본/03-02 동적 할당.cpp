//cout, endl ��ü�� ������ ����
#include <iostream>		//cout, endl ��ü�� ������ ���� 

using namespace std;

int main(void){
	int* ptr2 = new int[4];
	for (int i = 0; i < 4; i++) {
		ptr2[i] = 10 + i;
		cout<< ptr2[i] << " ";
	}
	delete [] ptr2;

	return 0;
}
