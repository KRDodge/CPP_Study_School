// October.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

using  namespace std;

struct User
{
	char userID[20];
	char passwd[20];
	int score[5];
	unsigned long magicPt;
	unsigned long healthPt;
};

int Warrior()
{
	User list[3]={
		{
			"Mr.a",
			"AisKing",
	{10,100,1000,1000,10000},
			50,
			100
		},
	{
		"Ms.b",
		"BisGod",
	{10,20,30,40,50},
	100,
		50
	},
	{
		"Mrs.c",
		"CisKingGod",
	{1,2,3,4,5},
		75,
		75
	}
	};
	
	for(int i=0;i<3;++i)
	{
		cout << "ID:  " << list[i].userID << endl << "Pwd: " << list[i].passwd << endl<<"Score: ";
		for(int j=0;j<5;++j)
		{
			cout << list[i].score[j] << "  ";
		}
		cout << endl <<"HealthPoint: "<< list[i].healthPt << endl <<"ManaPoint:   "<< list[i].magicPt << endl<<endl;
	}
    return 0;
}

