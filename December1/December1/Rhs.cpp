// December1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int Rhs()
{
	int&& data = 3 + 4;
	cout << data << endl;
	data++;
	cout << data << endl;

    return 0;
}

