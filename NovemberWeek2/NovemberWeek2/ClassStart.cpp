// NovemberWeek2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Point
{
public:
	void Print()
	{
		cout << x << " " << y << endl;
	}
	int x, y;
};

int ClassStart()
{
	Point pt1, pt2;

	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;

	pt1.Print();
	pt2.Print();
    return 0;
}

