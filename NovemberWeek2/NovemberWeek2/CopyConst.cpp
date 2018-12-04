#include "stdafx.h"
#include <iostream>

using namespace std;

class CopyA
{
	int a;
public:
	CopyA(int val)
	{
		this->a = val;
	}
	CopyA(const CopyA &x)
	{
		cout << "복사생성자" << endl;
		this->a = x.a;
	}
	int Val()
	{
		return a;
	}
};

CopyA Fun()
{
	CopyA M(11);
	return M;
}

int main()
{
	CopyA ex = Fun();
	cout << ex.Val() << endl;
	system("pause");
	return 0;
}