// SeptemberWeek2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int Practice5()
{
	int arr[4];
	int no, sum = 0;
	cin >> no;

	arr[0] = no / 1000;
	arr[1] = (no / 100) % 10;
	arr[2] = (no / 10) % 100 %10;
	arr[3] = (no % 1000) % 100 % 10;

	for(int i=0;i<4;i++)
	{
		sum += arr[i];
	}

	if(sum%5==0)
	{
		for(int i=3;i>=0;--i)
		{
			cout << arr[i];
		}
		cout << endl;
	}
	else
	{
		cout << sum << endl;
	}
	
    return 0;
}

