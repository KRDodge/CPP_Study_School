#include "stdafx.h"
#include <iostream>

using namespace std;

class Student
{
public:
	string name;
	int sNo;

	Student(const string& name_arg, int stdNumber);
	~Student();

public:
	static int student_count;
	static void PrintStdCount();
};

int Student::student_count=0;

void Student::PrintStdCount()
{
	cout << student_count << endl;
}
Student::Student(const string& name_arg, int stdNumber)
{
	++student_count;
	name = name_arg;
	sNo = stdNumber;
}
Student::~Student()
{
	--student_count;
}

void Func()
{
	Student b("fish",9);
	Student c("fisher",10);

	Student::PrintStdCount();
}

int StaticCount()
{
	Student a("junha", 8);
	Student::PrintStdCount();
	Func();
	return 0;
}