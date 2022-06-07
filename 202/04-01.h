#pragma once
#include <iostream>
#include <string.h>

using namespace std;


class  Point {
public:
	Point(void);
	//생성자
	Point(int X, int Y);
	void print();
	//연산자 오버로딩
	Point operator+(const Point& rhs);


private:
	int mX;
	int mY;
};