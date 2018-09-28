#include "stdafx.h"
#include <iostream>

using namespace std;

struct Student
{
	char grade;
	int TestScore;
	float FinalScore;
};

int StructBase()
{
	Student s1;
	s1.grade = 'A';
	s1.TestScore = 337;
	s1.FinalScore = 4.5;

	cout << s1.grade <<endl<< s1.TestScore <<endl<< s1.FinalScore << endl;
	return 0;
}