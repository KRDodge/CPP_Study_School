#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool IsAbuse(string pChatMessage)
{
	int size = pChatMessage.size();
	for (int i = 0; i < size-1; ++i)
	{
		if (0 == pChatMessage.compare("¹Ùº¸") || 0 == pChatMessage.compare("¸ÛÃ»ÀÌ") || 0 == pChatMessage.compare("¶×µÅÁö") || 0 == pChatMessage.compare("¹ÙÄû¹ú·¹"))
		{
			return true;
			break;
		}
	}
	return false;
}

int Abuse()
{
	string str;
	cin >> str;
	cout << boolalpha << IsAbuse(str) << endl;
	return 0;
}