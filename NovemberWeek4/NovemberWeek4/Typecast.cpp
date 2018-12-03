#include "stdafx.h"
#include <iostream>

using namespace std;

class CTestData
{
public:
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData" << endl;
	}
	CTestData(const CTestData &rhs):m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData;
};

void TestFunc(CTestData Param)
{
	cout << "TestFunc() " << Param.GetData() << endl;
}


int TypeCast()
{
	TestFunc(5);

	return 0;
}
