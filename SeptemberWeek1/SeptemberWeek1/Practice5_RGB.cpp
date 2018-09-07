#include "stdafx.h"
#include<iostream>
#include<bitset>

using namespace std;

int P5RGB()
{
	unsigned short color = 0x1234;
	unsigned short color_temp;
	color_temp = color & 0x07ff;

	unsigned short red=30;
	unsigned short red_temp;
	red_temp = red << 11;

	unsigned short color_finished;
	color_finished = color_temp | red_temp;

	cout << bitset<16>(color_finished) << "\t" << (int)color_finished << endl;

	return 0;
}