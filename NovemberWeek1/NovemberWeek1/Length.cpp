#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "Length.h"

using namespace std;

int Length()
{
	Point a,b;
	cin >> a.x >> a.y >> b.x >> b.y;
	double dist_a_b = Distance(a, b);
	cout << dist_a_b<<endl;
	return 0;
}

double Distance(Point p1, Point p2)
{
	return sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
}
