#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int i;
	printf("INPUT: ");
	cin >> str;
	int n = str.size();
	cout << str << endl;

	for (i = str.size() - 1; i >= 0; --i)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			putchar(str[i] + 'a' - 'A');
		}
		if (str[i] >= 'a'&&str[i] <= 'z')
		{
			putchar(str[i] - 'a' + 'A');
		}
	}

	cout << endl;
	return 0;
}