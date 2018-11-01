#include "stdafx.h"
#include <iostream>
#include<cmath>

using namespace std;

struct Point
{
	double x;
	double y;
};

double Distance(const Point& p1, const Point& p2)
{
	double distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y,2));

	return distance;
}

int distance()
{
	Point a,b;
	cin >> a.x >> a.y >> b.x >> b.y;
	cout << Distance(a, b) << endl;

	return 0;
}