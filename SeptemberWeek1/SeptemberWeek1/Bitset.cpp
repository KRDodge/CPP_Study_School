#include"stdafx.h"
#include<bitset>
#include<iostream>

using namespace std;

int Bitset()
{
	unsigned char a=178, b = 113;

	unsigned char c1, c2, c3, c4;
	c1 = a & b;
	c2 = a | b;
	c3 = a ^ b;
	c4 = ~a;

	cout << bitset<8>(a) << "(" << (unsigned int)a << ")" << endl;
	cout << bitset<8>(b) << "(" << (unsigned int)b << ")" << endl;
	cout << bitset<8>(c1) << "(" << (unsigned int)c1 << ")" << endl;
	cout << bitset<8>(c2) << "(" << (unsigned int)c2 << ")" << endl;
	cout << bitset<8>(c3) << "(" << (unsigned int)c3 << ")" << endl;
	cout << bitset<8>(c4) << "(" << (unsigned int)c4 << ")" << endl;

	return 0;
}