#include "stdafx.h"
#include <iostream>
using namespace std;

inline void Func()
{
	int a = 10;
	cout << "Inline" << endl;
	cout << a << endl;
}

int InlineFunc()
{
	Func();
	return 0;
}