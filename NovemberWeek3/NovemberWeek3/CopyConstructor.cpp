#include "stdafx.h"
#include <iostream>

using namespace std;

class Copy
{
	int a;
public:
	Copy(int val)
	{
		this->a = val;
	}
	Copy(const Copy &x)
	{
		cout << "���� ������" << endl;
		this->a = x.a;
	}
	int val()
	{
		return a;	
	}
};

Copy Func()
{
	Copy M(11);
	return M;
}

int CopyConstructor()
{
	Copy ex = Func();
	cout << ex.val() << endl;

	return 0;
}