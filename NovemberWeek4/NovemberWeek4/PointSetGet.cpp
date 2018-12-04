#include "stdafx.h"
#include <iostream>
using namespace std;

class CPoint
{
private:
	int x, y;

public:
	int GetX() { return x; }
	int GetY() { return y; }
	void SetX(int xParam)
	{
		if (xParam < 0)
		{
			x = 0;
		}
		else if (xParam > 100)
		{
			x = 100;
		}
		else
			x = xParam;
	}
	void SetY(int yParam)
	{
		if (yParam < 0)
		{
			y = 0;
		}
		else if (yParam > 100)
		{
			y = 100;
		}
		else
			y = yParam;
	}
};

int SetGet()
{
	CPoint a;
	a.SetX(-500);
	a.SetY(100);

	cout << a.GetX() <<" "<< a.GetY() << endl;

	return 0;
}