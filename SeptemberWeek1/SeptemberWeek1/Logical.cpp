#include "stdafx.h"
#include <iostream>

using namespace std;

int Logical()
{
	bool a = true;
	bool b = false;

	bool c = a && b;
	bool d = a || b;
	bool e = !a;

	cout << boolalpha << c << endl << d << endl << e << endl;
	return 0;
}