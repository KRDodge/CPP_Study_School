#include "stdafx.h"
#include<iostream>

using namespace std;

int Practice1()
{
	char c = 'B';
	int i = 19;
	float f = 4.5f;

	cout << "c의 주소 = " <<(int*)&c << endl;
	cout << "i의 주소 = " << &i << endl;
	return 0;
}