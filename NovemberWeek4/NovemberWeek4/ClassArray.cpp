#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
private:
	int x, y;
public:
	void Print(){ }
	Point(int x, int y);
	Point();
};

int ClassArray()
{
	Point pt(50, 50);

	Point* p1 = new Point;
	Point* p2 = new Point(100, 100);
	Point* p3 = new Point(pt);

	p1->Print();
	p2->Print();
	p3->Print();

	delete p1;
	delete p2;
	delete p3;

	return 0;
}