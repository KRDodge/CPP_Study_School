#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool IsAbuse(string pChatMessage)
{
	int size = pChatMessage.size();
	for (int i = 0; i < size-1; ++i)
	{
		if (0 == pChatMessage.compare("�ٺ�") || 0 == pChatMessage.compare("��û��") || 0 == pChatMessage.compare("�׵���") || 0 == pChatMessage.compare("��������"))
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