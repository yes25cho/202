//cout, endl ��ü�� ������ ����
#include <iostream>
#include <string.h>

using namespace std;


class  Point {
public:
	Point(void);
	Point(int X, int Y);
	void print();
private:
	int mX;
	int mY;
};

int main(void) {
	Point p1(1, 2);
	p1.print();
	return 0;
}

Point::Point(int X, int Y)
	:mX(X), mY(Y)
{
}
void Point::print() {
	cout << mX << ", " << mY << endl;
}
