#include "stdafx.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int i = 0x12345678;

	char* pc = (char*)&i;
	int a = 123;
	int* p = &a;

	cout << *p << endl;
	*p = 789;

	cout << p << endl << a << endl << *p<< endl;
	cout << hex << (int*)pc << endl;
	cout << *pc << endl;
	return 0;
}

