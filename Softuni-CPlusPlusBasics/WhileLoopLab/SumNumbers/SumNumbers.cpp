#include <iostream>

using namespace std;

int main()
{
	int targetNum, sum = 0;
	cin >> targetNum;
	while (targetNum > sum)
	{
		int numbers;
		cin >> numbers;
		sum += numbers;
	}
	cout << sum;
}
