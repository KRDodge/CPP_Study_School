#include "stdafx.h"
#include <iostream>

using namespace std;

int IsString()
{
	char NotString[] = { 'H','e','l','l','o' };

	char IsString[] = { 'H','e','l','l','o','\0' };

	cout << NotString << endl << IsString << endl;
	return 0;
}