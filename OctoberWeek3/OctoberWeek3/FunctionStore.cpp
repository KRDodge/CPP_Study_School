#include"stdafx.h"
#include <iostream>

using namespace std;

int FunctionStore()
{
	int size;
	cout << "몇 개의 정수를 입력하시겠습니까? ";
	cin >> size;

	float* arr = new float[size];

	cout << "정수를 입력사시오.\n";
	for(int i=0;i<size;++i)
	{
		cin >> arr[i];
	}

	float sum = 0;
	for(int i=0;i<size;++i)
	{
		sum += arr[i];
	}
	float ave = sum / size;
	cout << "합 = " << sum << ", 평균 = " << ave << endl;
	for(int i=0;i<size;++i)
	{
		if(arr[i]>ave)
		{
			cout << arr[i]<<endl;
		}
	}

	delete[] arr;



	return 0;
}