#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
public:
	int x, y;
	void Print();
	Point();
};

Point::Point()
{
	x = 0;
	y = 0;
}

void Point::Print()
{
	cout << x << " " << y << endl;
}

int main()
{
	Point p1;
	p1.Print();
}