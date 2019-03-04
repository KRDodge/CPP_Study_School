#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v[iterator Readable]: ";
	for(vector<int>::iterator iter = v.begin() ;iter!= v.end();++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	cout << "v[const iterator Redable]: ";
	for (vector<int>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	*iter = 100;

	return 0;

}