//cout, endl 객체를 가지고 있음
#include <iostream>
#include <string>

#include<stdio.h>
#include <string.h>

//std::  안써도 된다,.
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