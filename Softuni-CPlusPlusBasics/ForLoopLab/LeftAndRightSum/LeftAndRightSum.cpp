#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, sum1 = 0, sum2 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		sum1 += num;
	}
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		sum2 += num;
	}
	if (sum1 == sum2)
	{
		cout << "Yes, sum = " << sum1;
	}
	else
	{
		cout << "No, diff = " << abs(sum2 - sum1);
	}
}
