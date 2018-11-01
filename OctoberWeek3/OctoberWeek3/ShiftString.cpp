#include "stdafx.h"
#include <iostream>

using namespace std;

void shift(char* src ,int a)
{
	for(int i=0;i<a;++i)
	{
		int cnt = 0;
		for(int j=i;cnt<a;++cnt)
		{
			cout << src[j];
			if(++j>=a)
			{
				j = 0;
			}
		}
		cout << endl;
	}
}

int main()
{
	char original[] = "BINGO JJANG!!!";
	shift(original, sizeof(original)-1);
	cout << sizeof(original) << endl;
}