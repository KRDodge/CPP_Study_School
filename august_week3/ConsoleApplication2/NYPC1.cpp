#include <iostream>

using namespace std;

int main()
{
	int a, b,c,cnt1,cnt2,big,small;
	cin >> a >> b>>c;

	a > b ? big = a : big = b;
	a < b ? small = a : small = b;

	for(int i=0;i<c/big;++i)
	{
		if(c>0)
		{
			c -= big;
			++cnt1;
		}
		for(int j=0;j<c/small;j++)
		{
			if(c!=0)
			{
				c -= small;
				++cnt2;
			}
		}
		
	}

	cout << cnt1 << " " << cnt2 << endl;
}