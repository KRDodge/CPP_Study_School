// SeptemberWeek4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int SizeofArray()
{
	char cArray[3] = { 'A','B','C' };
	int iArray[4] = { 100,200,300,400 };

	cout << "sizeof(cArray) = " << sizeof(cArray) << " (Bytes)"<<endl;
	cout << "sizeof(cArray[0]) = " << sizeof(cArray[0]) << "(Bytes)" << endl;
	cout << "number of objects = " << sizeof(cArray)/sizeof(cArray[0]) << endl;

	cout << "sizeof(iArray) = " << sizeof(iArray) << "(Bytes)" << endl;
	cout << "sizeof(iArray[0]) = " << sizeof(iArray[0]) << "(Bytes)" << endl;
	cout << "number of objects = " << sizeof(iArray)/sizeof(iArray[0])  << endl;

    return 0;
}

