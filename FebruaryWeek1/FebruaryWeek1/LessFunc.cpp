// FebruaryWeek1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

using namespace std;

struct LessFunctor
{
	bool operator() (int left, int right) const
	{
		return left < right;
	}
};

bool LessFun(int left, int right)
{
	return left < right;
}


int main()
{
	bool(*LessPtr) (int, int) = LessFun;
	LessFunctor lessFunctor;

	cout << lessFunctor(10, 20) << endl;
	cout << LessFun(10, 20) << endl;
	cout << LessPtr(10, 20) << endl;

	return 0;
}

