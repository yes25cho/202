//cout, endl 객체를 가지고 있음
#include <iostream>
#include <string>

#include<stdio.h>
#include <string.h>

//std::  안써도 된다,.
using namespace std;

int main(void) 
{	
	char cl[] = "aaa", cj[] = "aaa", ck[] = "abc";
	printf("%d \n", strcmp(cl, cj) == 0);	// 같은 글자
	printf("%d \n", strcmp(cl, ck )<0);		//사전수 aaa => abc

	std::string cppl = "aaa", cppj = "aaa", cppk = "abc";
	cout<<(cppl==cppj)<<endl;
	cout << (cppl < cppk) << endl;

	return 0;
}