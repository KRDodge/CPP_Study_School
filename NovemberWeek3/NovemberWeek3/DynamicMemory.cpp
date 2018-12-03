#include "stdafx.h"
#include <iostream>

using namespace std;

class Dynamic
{
public:
	int *arr;
	Dynamic(int Size);
	~Dynamic();

};
Dynamic::Dynamic(int Size)
{
	arr = new int[Size];
}
Dynamic::~Dynamic()
{
	delete arr;
	arr = NULL;
}



int DynamicMemory()
{
	int size;
	cin >> size;

	Dynamic	d(size);

	for(int i=0;i<size;++i)
	{
		cin >> d.arr[i];
	}
	for(int i=size-1;i>=0;--i)
	{
		cout << d.arr[i] << " " ;
	}
	cout << endl;

	return 0;
}