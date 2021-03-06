// OctoberWeek4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

char* ReverseString(const char* src, int len)
{
	
	char* reverse = new char[len];

	for(int i=0;i<len;++i)
	{
		reverse[i] = src[len - i - 1];
	}

	reverse[len] = NULL;

	return reverse;
}


int Reverse()
{
	char original[] = "Why Jeju";
	char* copy = ReverseString(original, 8);

	cout << original << endl;
	cout << copy << endl;

	delete[] copy;
    return 0;
}

