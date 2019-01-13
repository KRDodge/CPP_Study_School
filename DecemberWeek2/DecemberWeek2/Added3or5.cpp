#include <iostream>

using namespace std;


int solution(int number)
{
	int sum = 0;
	for (int i = 1; i <= number; ++i) {
		if (i % 3 == 0) {
			sum += i;
		}
		else if (i % 5 == 0 && i % 3 != 0) {
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int a;
	cin >> a;
	cout << solution(a) << endl;
	return 0;
}