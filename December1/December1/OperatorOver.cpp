#include "stdafx.h"
#include <iostream>

using namespace std;

class CMyData
{
private:
	int m_nData = 0;

public:
	//��ȯ ������
	CMyData(int nParam) : m_nData(nParam) { cout << "CMyData(int)" << endl; }

	//���������
	CMyData(const CMyData &rhs) :m_nData(rhs.m_nData) { cout << "CMyData(const CMyData &)" << endl; }

	//�̵�������
	CMyData(const CMyData &&rhs) :m_nData(rhs.m_nData) { cout << "CMyData(const CMyData &&)" << endl; }

	//����ȯ
	operator int() { return m_nData; }

	CMyData operator+(const CMyData &rhs)
	{
		cout << "operator+" << endl;
		m_nData = rhs.m_nData;

		return *this;
	}

	CMyData operator=(const CMyData &rhs)
	{
		cout << "operator=" << endl;
		m_nData = rhs.m_nData;

		return *this;
	}
};

int main()
{
	cout << "***Begin***" << endl;
	CMyData a(0), b(3), c(4);

	a = b + c;
	cout << a << endl;
	cout << "***End***" << endl;

	return 0;
}