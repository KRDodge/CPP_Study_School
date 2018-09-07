#include"stdafx.h"
#include <bitset>
#include <iostream>

using namespace std;

int Shift()
{
	unsigned short us = 0xff00;
	short s = (short)0xff00;

	unsigned short us_shift = us >> 4;
	short s_shift = s >> 4;

	cout << bitset<16>(us) << "(" << us << ")" << endl;
	cout << bitset<16>(s) << "(" << s << ")" << endl;
	cout << bitset<16>(us_shift) << "(" << us_shift << ")" << endl;
	cout << bitset<16>(s_shift) << "(" << s_shift << ")" << endl;

	return 0;
}