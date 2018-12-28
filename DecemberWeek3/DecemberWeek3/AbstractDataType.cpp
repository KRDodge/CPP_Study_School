#include "stdafx.h"
#include <iostream>

using namespace std;

#define  DEFAULT_FARE 1000

class CPerson
{
public:
	CPerson() { }
	virtual ~CPerson()
	{
		cout << "deleted CPerson" << endl;
	}

	virtual void CalcFare() = 0;
	virtual unsigned int GetFare() { return m_nFare; }

protected:
	unsigned m_nFare = 0;
};

class CBaby:public CPerson
{
public:
	virtual void CalcFare()
	{
		m_nFare = 0;
	}
};

class CChild:public CPerson
{
public:
	virtual void CalcFare()
	{
		m_nFare = DEFAULT_FARE * 50 / 100;
	}
};

class CTeen:public CPerson
{
public:
	virtual void CalcFare()
	{
		m_nFare = DEFAULT_FARE * 75 / 100;
	}
};

class CAdult:public CPerson
{
public:
	virtual void CalcFare()
	{
		m_nFare = DEFAULT_FARE;
	}
};

int main()
{
	CPerson* arr[3] = { 0 };
	int nAge = 0;

	for(auto &person :arr)
	{
		cout << "³ªÀÌ: ";
		cin >> nAge;
		if (nAge < 8)
			person = new CBaby;
		else if (nAge < 14)
			person = new CChild;
		else if (nAge < 20)
			person = new CTeen;
		else
			person = new CAdult;

		person->CalcFare();
	}

	for (auto person : arr)
		cout << person->GetFare() << "¿ø" << endl;

	for(auto person :arr)
	{
		delete person;
	}

	return 0;
}