#include "stdafx.h"
#include <iostream>

using namespace std;

void Func(const int &Param)
{
	int &NewParam = const_cast<int &>(Param);

	NewParam = 20;
}

int ConstCast()
{
	int Data = 10;

	Func(Data);
	cout << Data << endl;

	return 0;

}