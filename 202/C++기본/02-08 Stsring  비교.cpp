//cout, endl ��ü�� ������ ����
#include <iostream>
#include <string>

#include<stdio.h>
#include <string.h>

//std::  �Ƚᵵ �ȴ�,.
using namespace std;

int main(void) 
{	
	char cl[] = "aaa", cj[] = "aaa", ck[] = "abc";
	printf("%d \n", strcmp(cl, cj) == 0);	// ���� ����
	printf("%d \n", strcmp(cl, ck )<0);		//������ aaa => abc

	std::string cppl = "aaa", cppj = "aaa", cppk = "abc";
	cout<<(cppl==cppj)<<endl;
	cout << (cppl < cppk) << endl;

	return 0;
}