// DecemberWeek2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int MiddleString()
{

	string input;
	cin >> input;
	


	int n = input.length();


	if (n % 2 == 0)
	{
		cout << input[n / 2 -1]<<input[n/2] << endl;
	}
	else
	{
		cout << input.at(n/2) << endl;
	}

	return 0;
	// return the middle character(s)
}