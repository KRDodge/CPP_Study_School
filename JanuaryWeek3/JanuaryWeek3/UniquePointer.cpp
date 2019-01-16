#include "pch.h"
#include <iostream>
#include <memory>

using namespace std;

class CTest {
public:
	CTest() { cout << "CTest()" << endl; }
	~CTest() { cout << "~CTest()" << endl; }
	void TestFunce() { cout << "TestFunc()" << endl; }
};

int main() {

	unique_ptr<CTest> ptr1(new CTest);

	return 0;
}