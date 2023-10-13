#include <iostream>

using namespace std;

int main()
{
	int start, end;
	cin >> start >> end;
	for (int i = start; i <= end; i++)
	{
		int currentNumber = i, evenSum = 0, oddSum = 0;
		bool isEvenPosition = true;

		while (currentNumber != 0)
		{
			int lastDigit = currentNumber % 10;
			if (isEvenPosition)
			{
				evenSum += lastDigit;
			}
			else
			{
				oddSum += lastDigit;
			}
			isEvenPosition = !isEvenPosition;
			currentNumber /= 10;
		}
		if (evenSum == oddSum)
		{
			cout << i << " ";
		}
	}
}
