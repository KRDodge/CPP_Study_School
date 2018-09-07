#include "stdafx.h"
#include<iostream>
#include <tuple>

using namespace std;

int Score()
{
	char a;
	cin >> a;
	switch (a)
	{
	case 'A':cout << "Ç« ½¬ÀÚ!" << endl;
		break;
	case 'B':cout << "½¯¸¸Å­ ½¬ÀÚ!" << endl;
		break;
	case 'C':
	case 'D':cout << "¾Ë¾Æ¼­ ½¬¾î¶óÀ×~!" << endl;
		break;
	case 'E':cout << "ÂìÂì" << endl;
		break;
	}
	return 0;
}