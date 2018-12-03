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
		cout << "복사 생성자" << endl;
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