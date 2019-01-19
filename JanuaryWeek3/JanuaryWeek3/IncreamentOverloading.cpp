#include "pch.h"
#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x=0, int _y=0) : x(_x),y(_y) { }
	void Print() const { cout << x << '.' << y << endl; }
	const Point& operator++()
	{
		++x;
		++y;
		return *this;
	}
	const Point operator++(int)
	{
		Point pt(x, y);
		x++;
		y++;
		return pt;
	}
};


int main()
{
	Point p1(2, 3), p2(2, 3);

	++p1;
	p2++;

	p1.Print();
	p2.Print();

	return 0;
}