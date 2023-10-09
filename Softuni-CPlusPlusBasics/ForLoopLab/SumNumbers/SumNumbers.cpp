#include <iostream>

using namespace std;

int main()
{
	int n, sumOfNumbers = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int numbers;
		cin >> numbers;
		sumOfNumbers += numbers;
	}
	cout << sumOfNumbers << endl;
}