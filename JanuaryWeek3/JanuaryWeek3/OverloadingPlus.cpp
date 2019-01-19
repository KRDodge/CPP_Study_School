#include "pch.h"
#include <iostream>

using namespace std;

class Point
{
	int x, y;

public:
	Point(int _x = 0, int _y = 0):x(_x),y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
	Point operator+(const Point &arg)
	{
		cout << "operator+()" << endl;
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;


		return pt;
	}
};

int main()
{
	Point p1(2, 3), p2(5, 5);
	Point p3;

	p3 = p1 + p2;

	p3.Print();

	p3 = p1.operator+(p2);

	p3.Print();

	return 0;
}