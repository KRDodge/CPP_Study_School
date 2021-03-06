// NovemberWeek1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int Grade()
{
	const int MAX_STUDENTS = 100;
	Student students[MAX_STUDENTS];
	float TotalAve = 0.0f;
	int NumberOfStudent = 0;


	while (1)
	{
		cout << "\n------ 메뉴 ------\n";
		cout << "1. 학생 성적 추가\n";
		cout << "2. 전체 성적 보기\n";
		cout << "Q. 프로그램 종료\n";
		cout << "------------------\n\n";
		cout << "원하는 작업의 번호를 입력하세요 : ";


		char select;
		cin >> select;


		switch (select)
		{
		case '1':

		{

			if (MAX_STUDENTS == NumberOfStudent)
			{
				cout << "\n더 이상 입력할 수 없습니다.\n";
				break;
			}
			Student& std = students[NumberOfStudent];

			std.sNo = NumberOfStudent + 1;

			cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요 : \n";
			cin >> std.name >> std.kor >> std.eng >> std.math;

			std.ave = float(std.kor + std.eng + std.math) / 3.0f;

			const int current = NumberOfStudent + 1;
			const int prev = NumberOfStudent;

			TotalAve = (TotalAve * prev / current) + (std.ave / current);
			NumberOfStudent++;
			cout << "\n학생 성적이 올바르게 입력되었습니다.\n";

			break;
		}
		case '2':
		{
			cout.precision(2);
			cout << fixed;
			cout << "\n           < 전체 성적 보기 >";
			cout << "\n   학번  이름  국어 영어 수학   평균\n";
			for (int i = 0; i < NumberOfStudent; ++i)
			{
				const Student& std = students[i];
				cout << setw(7) << std.sNo << setw(7) << std.name;
				cout << setw(5) << std.kor << setw(5) << std.eng;
				cout << setw(5) << std.math << setw(7) << std.ave << "\n";
			}

			cout << "\n전체 평균 = " << TotalAve << "\n";

			break;
		}
		case '3':
			cout << "\n프로그램을 종료합니다.\n";
			return 0;
		default:
			cout << "\n올바른 값을 입력해주세요.\n";
			break;
		}

	}

	return 0;
}
