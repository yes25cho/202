#include <iostream>
using namespace std;

int main() 
{
	int arr[4] = { 1, 2, 3, 4 };
	//for (int i = 0; i < 4; i++) {
	//	cout << arr[i];
	//	//cout <<arr[i] << endl;
	//}

	for (int i = 0; i<sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i]<<" ";
	}


}