#include "stdafx.h"
#include <iostream>
using namespace std;

class CMarine
{
private:
	int x, range = 5;
	bool isDead = false;
	char * classes;
	int health;

public:
	CMarine(char * M_classes, int M_x)
	{
		int len = strlen(M_classes) + 1;
		classes = new char[len];
		strcpy(classes, M_classes);
		x = M_x;

	}
	CMarine()
	{
		classes = NULL;
		x = 0;
		health = 20;
		cout << "Marine ready" << endl;
	}
	void SetMarine(int M_x)
	{
		x = M_x;
	}
	void SetMarineH(int h)
	{
		health = h;
	}
	void ShowStatus()
	{
		cout << "(" << x << ")" << endl;
		cout << health << endl;
	}
	int GetMarineX() { return x; }
	~CMarine()
	{
		delete[]classes;
		cout << "Deleted Marine" << endl;
	}
};

class CZergling
{
private:
	int x, y, damage, range = 3;
public:
	CZergling(int Z_x)
	{
		x = Z_x;
	}
	CZergling()
	{
		x = 0, damage = 5;
	}
	void ShowStatus() { cout << y << endl; }
	void SetX(int Z_x) { x = Z_x; }
	int GetX() { return x; }
};

int main()
{
	CMarine M_new;
	CMarine * M[3];
	char classstr[100];
	int x, y;
	for (int i = 0; i<3; ++i)
	{
		cout << "위치" << endl;
		cin >> x >> y;
		cout << "계급" << endl;
		cin >> classstr;
		M[i] = new CMarine(classstr, x);
	}
	CMarine M2();
	CMarine M3(M_new);
	CZergling Z(5);

	for (int i = 0; i<3; ++i)
	{
		M[i]->SetMarineH(M[i]->GetMarineX() - (M[i]->GetMarineX() - Z.GetX()));
	}
	M3.SetMarine(5);
	delete M[0];
	delete M[1];
	delete M[2];
	return 0;
}

