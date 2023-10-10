#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double moneySum, centsCount = 0;
	cin >> moneySum;
	moneySum = floor(moneySum * 100);
	while (moneySum > 0)
	{
		if (moneySum >= 200)
		{
			centsCount++;
			moneySum -= 200;
		}
		else if (moneySum >= 100)
		{
			centsCount++;
			moneySum -= 100;
		}
		else if (moneySum >= 50)
		{
			centsCount++;
			moneySum -= 50;
		}
		else if (moneySum >= 20)
		{
			centsCount++;
			moneySum -= 20;
		}
		else if (moneySum >= 10)
		{
			centsCount++;
			moneySum -= 10;
		}
		else if (moneySum >= 5)
		{
			centsCount++;
			moneySum -= 5;
		}
		else if (moneySum >= 2)
		{
			centsCount++;
			moneySum -= 2;
		}
		else if (moneySum >= 1)
		{
			centsCount++;
			moneySum -= 1;
		}
	}

	cout << centsCount << endl;
}
