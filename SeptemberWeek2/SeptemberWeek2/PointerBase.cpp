#include "stdafx.h"
#include<stdio.h>

int	PointerBase()
{
	int i, *p;

	i = 99;
	p = &i;
	*p = 77;
	printf("%5d%5d\n", i, *p);
	printf("%u\t%u\t", &i, p);
	return 0;
}