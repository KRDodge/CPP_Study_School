#include"stdafx.h"
#include<iostream>
using namespace std;

class WhoAmI
{
public:
	int id;

	WhoAmI(int id);
	void Show() const{ }
	void Test();
};

WhoAmI::WhoAmI(int id)
{
	this->id = id;
}

void WhoAmI::Test()
{
	cout << this << endl;
}

int classThis()
{
	WhoAmI a(10);
	a.Show();
	return 0;
}
