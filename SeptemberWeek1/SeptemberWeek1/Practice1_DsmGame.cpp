#include"stdafx.h"
#include<iostream>

using namespace std;

int Logical()
{
	int age, rate;
	char bad;
	bool baduser;

	cout << "age:" ;
	cin >> age;
	
	cout << "rate:";
	cin >> rate;
	
	cout<<"R U bad (Y or N):";
	cin >> bad;

	if(bad=='Y')
	{
		baduser = true;
	}
	else if(bad=='N')
	{
		baduser = false;
	}

	if (age >= 12 && rate >= 1400 && rate <= 1800 && baduser == false)
	{
		cout << "come in" << endl;
	}
	else
	{
		cout << "go away" << endl;
	}

	return 0;

}