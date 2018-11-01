#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string path;
	cin >> path;

	int len = path.length();
	string ext = path.substr(path.find_last_of("."));

	cout << "extension = "<<ext << endl;
	return 0;
}