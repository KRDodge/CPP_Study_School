#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T>
class ObjectInfo
{
	T data;
public:
	ObjectInfo(const T& d) : data(d) { }

	void Print()
	{
		cout << "Type: " << typeid(data).name() << endl;
		cout << "Size: " << sizeof(data) << endl;
		cout << "Value: " << data << endl;
		cout << endl;
	}
};

int main()
{
	ObjectInfo<int> d1(10);
	d1.Print();

	ObjectInfo<double> d2(5.5);
	d2.Print();

	ObjectInfo<string> d3("Hello!");
	d3.Print();

	return 0;
}