#include "stdafx.h"
#include <iostream>

using namespace std;

int StringArray()
{
	char arr1[] = "ABCDE";
	char arr2[] = { 'A','B','C','D','E',0 };

	cout << "sizof(arr1) = " << sizeof(arr1) << " (bytes)" << endl;
	cout << "sizof(arr2) = " << sizeof(arr2) << " (bytes)" << endl;

	cout << arr1[4] << (int)arr1[5] << endl;
	cout << arr2[4] << (int)arr2[5] << endl;
	return 0;
}