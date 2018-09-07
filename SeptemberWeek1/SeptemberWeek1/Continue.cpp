#include "stdafx.h"
#include <iostream>

using namespace std;

int Continue()
{
	int sum = 0;
	for(int i=1;i<=10;++i)
	{
		if(5==i)
			continue;
		sum += i;
	}
	cout << sum << endl;

	return 0;
}