//cout, endl ��ü�� ������ ����
#include <iostream>
#include <string>

#include<stdio.h>


//std::  �Ƚᵵ �ȴ�,.
using namespace std;

int main(void) 
{	
	char cl[10] = "aaa";
	strcat(cl, "++");
	printf("%d \n", strlen(cl));		//3
	printf("%s \n", cl);

	string cppl = "aaa";
	cout << cppl.size() << endl;		//3
	cout << cppl.length() << endl;		//3
	cppl = "++" + cppl;
	cout << cppl.c_str() << endl;
	return 0;
}