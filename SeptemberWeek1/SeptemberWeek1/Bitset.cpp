#include"stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	unsigned char a=178, b = 113;

	unsigned char c1, c2, c3, c4;
	c1 = a & b;
	c2 = a | b;
	c3 = a ^ b;
	c4 = ~a;

	cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl;

	return 0;
}