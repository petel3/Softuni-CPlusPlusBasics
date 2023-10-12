#include <iostream>

using namespace std;

int main()
{
	int n, counter = 0;
	cin >> n;

	for (int firstNum = 0; firstNum <= n; firstNum++)
	{
		for (int secondNum = 0; secondNum <= n; secondNum++)
		{
			for (int thirdNum = 0; thirdNum <= n; thirdNum++)
			{
				if (firstNum + secondNum + thirdNum == n)
				{
					counter++;
				}
			}
		}
	}
	cout << counter;
}
