#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
public:
	int x, y;
	void Print();
	Point();
	Point(int initialX, int initialY);
};

Point::Point(int initialX, int initialY)
{
	x = initialX;
	y = initialY;

}
void Point::Print()
{
	cout << x << " " << y << endl;
}


int main()
{
	Point pt(3, 5);
	pt.Print();
	return 0;
}
