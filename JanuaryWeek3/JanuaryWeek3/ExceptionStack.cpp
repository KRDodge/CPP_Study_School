#include "pch.h"
#include <iostream>

using namespace std;

void TestFunc1()
{
	cout << "****TestFunc1() - Begin****" << endl;
	cout << "****TestFunc1() - Begin****" << endl;
}

void TestFunc2()
{
	cout << "****TestFunc2() - Begin****" << endl;
	TestFunc1();
	cout << "****TestFunc2() - End****" << endl;
}

void TestFunc3()
{
	cout << "****TestFunc3() - Begin****" << endl;
	TestFunc2();
	cout << "****TestFunc3() - End****" << endl;
}

int main()
{
	try
	{
		TestFunc3();
	}

	catch (...)
	{
		cout << "Exception handling" << endl;
	}

	return 0;
}