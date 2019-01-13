// JanuaryWeek3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

using namespace std;

template<typename T>
class CMyArray
{
public:
	explicit CMyArray(int nSize):m_nSize(nSize)
	{
		m_pData = new T[nSize];
	}

	~CMyArray() { delete[] m_pData; }

	CMyArray(const CMyArray &rhs)
	{
		m_pData = new T[rhs.m_nSize];
		memcpy(m_pData, rhs.m_pData, sizeof(T)* rhs.m_nSize);
		m_nSize = rhs.m_nSize;
	}

	CMyArray& operator=(const CMyArray &rhs)
	{
		if (this == &rhs)
			return *this;

		delete m_pData;
		m_pData = new T[rhs.m_nSize];
		memcpy(m_pData, rhs.m_pData, sizeof(T)* rhs.m_nSize);
		m_nSize = rhs.m_nSize;

		return *this;
	}

	CMyArray(CMyArray &&rhs)
	{
		m_pData = rhs.m_pData;
		m_nSize = rhs.m_nSize;
		rhs.m_pData = nullptr;
		rhs.m_nSize = 0;
	}

	T& operator[](int nIndex)
	{
		if(nIndex<0 || nIndex>=m_nSize)
		{
			cout << "ERROR: 배열의 경계를 벗어난 접근" << endl;
			exit(1);
		}
		return m_pData[nIndex];
	}

	T& operator[](int nIndex) const
	{
		return operator[](nIndex);
	}

	int GetSize() { return m_nSize; }

private:
	T *m_pData = nullptr;
	int m_nSize = 0;
};


int main()
{
	CMyArray<int> arr(5);

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for(int i=0;i<5;++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	CMyArray<int> arr2(3);
	arr2 = arr;
	for(int i=0;i<5;++i)
	{
		cout << arr2[i] << ' ';
	}
	cout << endl;

	return 0;
}

