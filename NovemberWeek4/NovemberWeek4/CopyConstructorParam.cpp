// NovemberWeek4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class TestData
{
public:
	TestData(int nParam) : m_nData(nParam)
	{
		cout << "TestData" << endl;
	}
	TestData(const TestData &rhs) :m_nData(rhs.m_nData)
	{
		cout << "TestData" << endl;
	}

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

void TestFunc(TestData &param)
{
	cout << "TestFunc()" << endl;
	param.SetData(20);
}

int CopyConstructorParam()
{
	cout << "start" << endl;
	TestData a(10);
	TestFunc(a);

	cout << a.GetData() << endl;

    return 0;
}

