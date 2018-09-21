#include "stdafx.h"
#include <stdio.h>

int Ptrpp()
{
	static char str[] = "1234567890";
	char *p1 = str, *p2 = &str[5];

	while(p1<p2)
	{
		printf("%s\n", p1++);
	}
	return 0;
}
