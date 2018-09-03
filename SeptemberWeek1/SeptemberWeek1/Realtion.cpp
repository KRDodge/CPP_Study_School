#include "stdafx.h"
#include <iostream>

using namespace std;

int Relation()
{
	int a = 3;
	int b = 5;

	bool c = a > b;
	bool d = a >= b;
	bool e = a < b;
	bool f = a <= b;
	bool g = a == b;
	bool h = a != b;

	cout << boolalpha << c << endl << d << endl << e << endl << f << endl << g << endl << h << endl;

	return 0;
}