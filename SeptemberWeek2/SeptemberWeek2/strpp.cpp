#include "stdafx.h"
#include <stdio.h>

int Strpp()
{
	const char *ptr = "COMPUTER", *str;

	str = ptr;
	while(*str != '\0')
	{
		str++;
	}
	printf("%d\n", str - ptr);
	return 0;
}