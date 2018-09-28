#include "stdafx.h"
#include <iostream>

using namespace std;

int PointerStore(int argc, char* argv[])
{
	int a = 123;
	int *p;
	p = &a;

	cout << &a << endl;
	cout << p << endl;
	cout << &p << endl;

	return 0;
}
