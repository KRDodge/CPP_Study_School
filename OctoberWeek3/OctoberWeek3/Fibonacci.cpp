#include "stdafx.h"
#include<iostream>

using namespace std;

int Fibonacci(int n);

int Fib()
{
	int a,result;
	cin >> a;
	result = Fibonacci(a);

	if(a/10==1 && a/100 != 11)
	{
		cout << a << "st Fibonacci number = " << result << endl;
	}
	else if (a / 10 == 2 && a/100 != 12)
	{
		cout << a << "nd Fibonacci number = " << result << endl;
	}
	else
	{
		cout << a << "th Fibonacci number = " << result << endl;
	}
	return 0;
}

int Fibonacci(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}
