#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	// ũ�Ⱑ 10���� ������ �����迭 
	string s1[10];
	string* s2 = new string[10];

	//ũ�� Ȯ���� ������ ���� �迭
	vector<string> s3;
	s3.reserve(10);

	for (int i = 0; i < 10; i++) {
		s1[i] = "a";
		s2[i] = "a";
		s3.push_back("a");
	}

	//
	s1[10] = "a";
	s2[10] = "a";
	s3.push_back("a");

}