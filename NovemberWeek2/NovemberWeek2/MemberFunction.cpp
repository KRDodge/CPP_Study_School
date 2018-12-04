#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
public:
	int x, y;
	void Print();
};

void Point::Print()
{
	int x = 333;
	cout << x << " " << y << endl;
}

int main()
{
	Point p1, p2;
	p1.x = 100;
	p1.y = 100;
	p2.x = 200;
	p2.y = 200;

	p1.Print();
	p2.Print();

	return 0;
}