#include "stdafx.h"
#include<iostream>

using namespace std;

int DoublePointer()
{
	int a = 10;
	int *p;
	int **pp;

	p = &a;
	pp = &p;

	if(*pp==&a)
	{
		cout <<"*pp == &a"<< endl;
	}
	else 
	{  
		cout << "*pp != &a" << endl;
	}
	cout << a<<" "<<*p << " " << **pp << endl;
    return 0;
}