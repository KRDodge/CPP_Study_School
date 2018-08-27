#include <iostream>

using namespace std;

class base{
public:
	virtual int getDevide() = 0;
	void a(int small)
	{
		a_ = small;
	}
	void b(int big)
	{
		b_ = big;
	}
	void c(int c)
	{
		c_ = c;
	}
	void d(int i)
	{
		index1 = i;
	}
	void e(int j)
	{
		index2 = j;
	}

protected:
	int a_;
	int b_;
	int c_;
	int index1;
	int index2;
};

class devide:public base
{
public:
	int i = 0;
	int j = 0;
	int getDevide()
	{
		for(i=1;i<=index1;++i)
		{
			c_ -= b_;
			for(j=1;j<=index2;++j)
			{
				c_ -= a_;
			}
		}
		return c_;
	}
	int returni()
	{
		return i;
	}
	int returnj()
	{
		return j;
	}
};

int main()
{
	int a, b, c, big, small;

	cin >> a >> b >> c;


	a > b ? big = a : big = b;
	a < b ? small = a : small = b;

	devide base;

	base.a(small);
	base.b(big);
	base.c(c);

	while (base.getDevide() == 0) {
		for (int i = 1; i <= c; ++i)
		{
			for (int j = 1; j <= c; ++j)
			{
				base.d(i);
				base.e(j);
			}
		}
	}

	
	cout << base.returni() <<" "<< base.returnj() << endl;

	
}