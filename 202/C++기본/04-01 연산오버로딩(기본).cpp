//cout, endl ��ü�� ������ ����
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
	Point operator+(const Point& rhs)
	{
		Point p;
		p.mX = mX + rhs.mX;
		p.mY = mY + rhs.mY;
		return p;
	}
private:
	int mX;
	int mY;
};

int main(void) {
	Point p1(1, 2);
	Point p2(3, 4);
	p1.print();

	Point sum = p1 + p2;
	sum.print();		//(4, 6)
	return 0;
}

Point::Point(void) {
}

Point::Point(int X, int Y)
	:mX(X), mY(Y)
{
}
void Point::print() {
	cout << mX << ", " << mY << endl;
}
