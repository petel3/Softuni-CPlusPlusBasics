#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
	double sumNumbers = 0;
	for (int i = 1; i <= n; i++)
	{
		double numbers;
		cin >> numbers;
		sumNumbers += numbers;

	}
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << sumNumbers / n;
}
