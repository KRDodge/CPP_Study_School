#include "stdafx.h"
#include <stdio.h>

int CArray()
{
	int i, j;
	static int ji1[2][3] = { 1,2,3,4 };
	static int ji2[2][3] = { {1,2},{3,4} };

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("ji1[%d][%d]=%d\tji2[%d][%d]=[%d]\n", i, j, ji1[i][j], i, j, ji2[i][j]);
		}
	}
	return 0;
}