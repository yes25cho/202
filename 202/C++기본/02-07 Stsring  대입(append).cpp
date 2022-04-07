//cout, endl 객체를 가지고 있음
#include <iostream>
#include <string>

#include<stdio.h>
#include <string.h>

//std::  안써도 된다,.
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