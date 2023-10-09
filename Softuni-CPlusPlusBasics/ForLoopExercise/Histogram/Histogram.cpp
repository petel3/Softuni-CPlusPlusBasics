#include <iostream>

using namespace std;

int main()
{
	int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		if (num < 200)
		{
			c1++;
		}
		else if (num <= 399)
		{
			c2++;
		}
		else if (num <= 599)
		{
			c3++;
		}
		else if (num <= 799)
		{
			c4++;
		}
		else
		{
			c5++;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << 100.0 * c1 / n << "%" << endl;
	cout << 100.0 * c2 / n << "%" << endl;
	cout << 100.0 * c3 / n << "%" << endl;
	cout << 100.0 * c4 / n << "%" << endl;
	cout << 100.0 * c5 / n << "%" << endl;
}
