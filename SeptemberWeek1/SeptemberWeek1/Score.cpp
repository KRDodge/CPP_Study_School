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
	case 'A':cout << "ǫ ����!" << endl;
		break;
	case 'B':cout << "����ŭ ����!" << endl;
		break;
	case 'C':
	case 'D':cout << "�˾Ƽ� �������~!" << endl;
		break;
	case 'E':cout << "����" << endl;
		break;
	}
	return 0;
}