#include "stdafx.h"
#include <iostream>

using namespace std;

char* Reverse(const char* src, int len)
{
	char* reverse = new char[len + 1];
	for(int i=0;i<len;++i)
	{
		reverse[i] = src[len - i - 1];
	}
	reverse[len] = NULL;
	return reverse;

}

int ReverseString()
{
	char original[] = "RACECARs";
	char* copy = Reverse(original, 8);

	cout << original << endl;
	cout << copy << endl;

	delete[] copy;
	copy = NULL;
	return 0;
}