#include "stdafx.h"
#include <iostream>

using namespace std;

int StringLenght(const char* str);

int String()
{
	char moonja[] = "moonjayul";
	int length = StringLenght(moonja);
	cout << moonja << endl << length << endl;
	return 0;
}

int StringLenght(const char* str)
{
	int a=0;
	while(*str != NULL)
	{
		++str;
		++a;
	}
	return a;
}