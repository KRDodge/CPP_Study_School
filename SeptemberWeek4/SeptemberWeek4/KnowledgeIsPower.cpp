#include "stdafx.h"
#include <iostream>
#include <string>

using  namespace std;

int KnowledgeIsPower()
{
	char example[] = "scientia est potentia";
	string a = example;
	reverse(begin(a), end(a));

	cout << a << endl;

	return 0;
}