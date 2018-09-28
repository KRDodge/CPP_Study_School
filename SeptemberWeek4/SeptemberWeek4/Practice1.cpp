#include "stdafx.h"
#include<iostream>

using namespace std;

int Practice1()
{
	char c = 'B';
	int i = 19;
	float f = 4.5f;

	cout << "c狼 林家 = " <<(int*)&c << endl;
	cout << "i狼 林家 = " << &i << endl;
	return 0;
}