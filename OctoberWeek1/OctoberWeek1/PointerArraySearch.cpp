#include "stdafx.h"
#include<iostream>

using namespace std;

int PointerArraySearch(int argc, char* argv[])
{
	int nArray[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p = nArray;

	while(p!=nArray+(sizeof(nArray)/sizeof(int))f)
	{
		cout << *p++ << endl;
	}
	return 0;
}
