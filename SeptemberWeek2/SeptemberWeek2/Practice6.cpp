#include "stdafx.h"
#include<iostream>

using namespace std;

int Practice6()
{
	static int arr[6][6] = { {15,25,35,45},{20,30,40,50},{36,87,12,90},{27,38,54,39} };
	int i, j;

	for(i=0;i<4;++i)
	{
		for(j=0;j<4;++j)
		{
			arr[i][4] += arr[i][j];
			arr[4][i] += arr[j][i];
			arr[i][5] = arr[i][4] / 4;
			arr[5][i] = arr[4][i] / 5;
		}
	}

	for(i=0;i<4;++i)
	{
		arr[4][4] += arr[i][4];
		arr[5][5] += arr[i][5];
	}
	arr[5][5]/= 4;


	for(i=0;i<6;++i)
	{
		for(j=0;j<6;++j)
		{
			cout << arr[i][j]<<"\t";
		}
		cout << endl;
	}
	return 0;
}