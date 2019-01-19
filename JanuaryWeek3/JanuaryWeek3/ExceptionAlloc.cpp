#include "pch.h"
#include <new>
#include <iostream>

using namespace std;

class CTest
{
public:
	CTest(int nSize)
	{
		m_pszData = new char[nSize];
	}
	~CTest()
	{
		delete[] m_pszData;
		cout << "~CTest()" << endl;
	}

private:
	char *m_pszData;
};

int main()
{
	try
	{
		int nSize;
		cout << "Input size";
		cin >> nSize;
		CTest a(nSize);
	}

	catch(bad_alloc &exp)
	{
		cout << exp.what() << endl;
		cout << "ERROR: CTest()" << endl;
	}
	return 0;
}