#include "stdafx.h"
#include<iostream>
#include<bitset>

using namespace std;

int P4_RGB()
{
	unsigned short color = 0x1234;

	unsigned short blue ;
	blue = color & 0x001f;

	cout << bitset<16>(color) << ", " << (int)color << endl;
	cout << bitset<16>(blue) << ", " << (int)blue << endl;

	return 0;


}