#pragma once
#include <iostream>
#include <string.h>

using namespace std;


class  Point {
public:
	Point(void);
	//������
	Point(int X, int Y);
	void print();
	//������ �����ε�
	Point operator+(const Point& rhs);


private:
	int mX;
	int mY;
};