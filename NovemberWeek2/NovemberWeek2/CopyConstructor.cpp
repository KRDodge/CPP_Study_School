#include "stdafx.h"
#include <iostream>

using namespace std;

class point
{
public:
	int x, y;
	void print();
	point();
	point(int initialX, int initialY);
	point(const point& pt);
};

point::point(const point& pt)
{
	cout << "복사생성자호출" << endl;
	x = pt.x;
	y = pt.y;
}
void point::print()
{
	cout << x << " " << y << endl;
}
point::point(int initialX, int initialY)
{
	x = initialX;
	y = initialY;
}


int main()
{
	point p1(100, 100), p2(200, 200);

	point p3 = p1;
	p3.print();

	p3 = p2;
	p3.print();

	return 0;
}