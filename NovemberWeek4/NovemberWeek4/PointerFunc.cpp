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
	void SetX(int xParam) { x = xParam; }
	void SetY(int yParam) { y = yParam; }
	void Print();
};
void CPoint::Print()
{
	cout << x << " " << y << endl;
}


typedef void(CPoint::*FP2)(int);

int main()
{ 
	CPoint pt(50, 50);

	FP2 fp2 = &CPoint::SetX;
	(pt.PF2)
	pt.Print();
	return 0;
}