#include "stdafx.h"
#include <stdio.h>

int MultiplyArray()
{
	int i, j, k;
	int x[2][3] = { {1,2,3},{4,5,6} };
	int y[3][2] = { {6,5,},{4,3},{2,1} };

	int z[2][2];

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			z[i][j] = 0;
			for(k=0;k<3;k++)
			{
				z[i][j] += x[i][k] + y[k][j];
			}
		}
	}
	for (i = 0; i<2; i++)
	{
		for (j = 0; j<2; j++)
		{
			printf("%5d", z[i][j]);
		}
		printf("\n");
	}
	return 0;
}
