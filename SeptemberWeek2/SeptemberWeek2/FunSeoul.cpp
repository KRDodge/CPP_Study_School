#include "stdafx.h"
#include <stdio.h>

void FunSeoul(int *a)
{
	int i = 0, sum = 0;
	while (i<5)
	{
		sum += *(a + i++);
	}
	printf("%d\n", sum);
}

int fun_seoul()
{
	static int p[] = { 1,3,5,5,1 };
	FunSeoul(&p[0]);
	return 0;
}
