//cout, endl ��ü�� ������ ����
#include <iostream>
#include <string>

#include<stdio.h>
#include <string.h>

//std::  �Ƚᵵ �ȴ�,.
using namespace std;

int main(void) 
{	
	char cl[10] = "aaa";
	prinf("%d \n", strlen(cl));		//3

	string cppl = "aaa";
	cout << cppl.size() << endl;		//3
	cout << cppl.length() << endl;		//3
	return 0;
}