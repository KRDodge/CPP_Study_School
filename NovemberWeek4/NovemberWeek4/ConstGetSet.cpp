#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{

private:
	int x, y;

public:
	void print() const;

	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	void SetX(int value);
	void SetY(int value);

	int GetX() const { return x; }
	int GetY() const { return y; }
};

void Area(const Point& pt)
{
	int area = pt.GetX() * pt.GetY();
	cout << area << endl;
}

int PointArea()
{
	
}