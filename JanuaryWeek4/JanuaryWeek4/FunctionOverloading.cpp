#include "pch.h"
#include <iostream>

using namespace std;

template<typename T1,typename T2>
void Print(T1 a, T2 b)
{
	cout << a << ' ' << b << endl;
}

int main()
{
	Print(10, 1.5);
	Print(0.123, "is here");
	Print("ABC", 100);

	return 0;
}