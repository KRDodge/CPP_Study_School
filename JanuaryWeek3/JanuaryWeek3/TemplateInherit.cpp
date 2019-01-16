#include "pch.h"
#include <iostream>

using namespace std;

template <typename T>
class CMyData
{
public:

protected:
	T m_nData;
};


template<typename T>
class CMyDataEx:public CMyData<T>
{
public:
	T GetData() const { return m_nData; }
	void SetData(T param) { m_nData = param; }
};

int main()
{
	CMyDataEx<int> a;
	a.SetData(5);
	cout << a.GetData() << endl;

	return 0;
} 