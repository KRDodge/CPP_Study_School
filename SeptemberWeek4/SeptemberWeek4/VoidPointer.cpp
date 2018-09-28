#include "stdafx.h"
#include <iostream>

using namespace std;

int VoidPointer(int argc, char* argv[])
{
	int i = 400;
	void *pv = &i;

	int* pi = (int*)pv;

	return 0;
}
