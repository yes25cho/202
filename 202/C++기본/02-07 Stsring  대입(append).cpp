//cout, endl ��ü�� ������ ����
#include <iostream>
#include <string>

#include<stdio.h>
#include <string.h>

//std::  �Ƚᵵ �ȴ�,.
using namespace std;



int main(void) 
{	
	char cMunja[20];
	strcpy(cMunja, "c_insert");		//c_insert
	strcat(cMunja, "++");			//c_insert++
	printf("%s \n", cMunja );

	std::string CppMunja;
	CppMunja = "cpp_insert";
	CppMunja += "++";

	cout << CppMunja << endl;

	return 0;
}