#include "stdafx.h"
#include <iostream>

using namespace std;

class Copy
{
private:
	int m_nData = 0;

public:
	Copy()
	{
		cout << "Copy()" << endl;
	}
	int GetData(void) const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

int main()
{ 
	Copy a;
	a.SetData(10);

	Copy b(a);
	cout << b.GetData() << endl;

	return 0;
}