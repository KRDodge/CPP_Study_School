#include "stdafx.h"
#include <iostream>

using namespace std;

class CMyData
{
private:
	int *m_pnData = new int(*rhs.m_pnData);

public:
	explicit CMyData(int nParam)
	{
		m_pnData = new int(nParam);
	}

	~CMyData() { delete m_pnData; }

	void operator = (const CMyData &rhs)
	{
		delete m_pnData;

		m_pnData = new int(*rhs.m_pnData);
	}
};

int main()
{
	CMyData a(0), b(5);
	a = b;
	cout << a << endl;
	return 0;
}