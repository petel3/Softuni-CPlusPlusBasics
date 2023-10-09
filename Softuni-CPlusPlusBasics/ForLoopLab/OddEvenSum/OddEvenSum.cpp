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
		if (i % 2 == 0)
		{
			sum2 += num;
		}
		else
		{
			sum1 += num;
		}
	}
	if (sum1 == sum2)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << sum1;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(sum1 - sum2) << endl;
	}
}