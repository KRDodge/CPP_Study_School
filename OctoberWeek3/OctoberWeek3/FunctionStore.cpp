#include"stdafx.h"
#include <iostream>

using namespace std;

int FunctionStore()
{
	int size;
	cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�? ";
	cin >> size;

	float* arr = new float[size];

	cout << "������ �Է»�ÿ�.\n";
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
	cout << "�� = " << sum << ", ��� = " << ave << endl;
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