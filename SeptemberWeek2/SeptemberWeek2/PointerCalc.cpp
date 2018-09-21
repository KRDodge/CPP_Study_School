#include "stdafx.h"
#include <stdio.h>

int PointerCalc()
{
	int data[][3] = { 1,3,4,5,2,9,6,8,7 };
	int *p = data[1];
	int x, y;

	x = *p;
	y = *(p + 2);
	printf("x=%d,y=%d\n\n", x, y);
	return 0;
}
