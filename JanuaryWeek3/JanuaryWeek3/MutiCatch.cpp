#include "pch.h"
#include <iostream>

using namespace std;

void ExceptTest1()
{
	int nInput;

	cout << "1~10 양의 정수를 입력하세요";
	cin >> nInput;

	if(nInput < 1||nInput>10)
	{
		throw nInput;
	}
}

void ExceptTest2()
{
	char ch;
	cout << "Menu: [A]dd\t[D]elete\t[E]xit\n";
	cin >> ch;

	if(ch!='A' && ch!='D'&& ch!='E')
	{
		throw ch;
	}
}

int main()
{
	cout << "****Begin****" << endl;

	try
	{
		ExceptTest1();
		ExceptTest2();
	}

	catch(int nExp)
	{
		cout << "ERROR: " << nExp << " is out of range" << endl;
	}

	catch(char ch)
	{
		cout << "ERROR: " << ch << " is unknown menu" << endl;
	}


	cout << "****End****" << endl;

	return 0;
}