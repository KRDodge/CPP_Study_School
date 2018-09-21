#include "stdafx.h"
#include <stdio.h>

int sum(int *x,int *y)
{
	int c;

	++*x;
	++*y;
	c = *x + *y;
	printf("%5d%5d%5d\n", *x, *y, c);
	return (c);
}

int CBR()
{
	int m = 3, k = 5, c;
	c = sum(&m, &k);
	printf("%5d%5d%5d\n", m, k, c);
	return 0;
}