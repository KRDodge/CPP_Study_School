#include "pch.h"
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	stack<int, vector<int>> st;

	st.push(10);
	st.push(20);
	st.push(30);

	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	if (st.empty())
		cout << "No Data In Stack" << endl;

	return 0;
}