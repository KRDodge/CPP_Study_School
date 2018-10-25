#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int Mid(int arr[], int len)
{
	int temp;
	for(int i=0;i<len-1;++i)
	{
		for(int j=0;j<len-1;++j)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	return arr[len / 2];
}

int middle()
{
	int arr[10] = { 8,10,7,2,16,9,1,3,5 };

	int mid = Mid(arr, sizeof(arr)/4);

	cout << mid << endl;
	
	return 0;
}