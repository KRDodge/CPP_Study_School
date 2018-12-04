// NovemberWeek2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

using namespace std;

class CTest 
{
public:
	CTest(int nParam) :m_nData(nParam) {};
	CTest(){}

	int GetData()const {
		return m_nData;
	}

	int SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

int main()
{
	CTest a(10);
    cout << a.GetData()<< endl;

	return 0;
}

