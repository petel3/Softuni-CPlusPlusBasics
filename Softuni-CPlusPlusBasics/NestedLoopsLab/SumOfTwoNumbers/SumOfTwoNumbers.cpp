#include <iostream>

using namespace std;

int main()
{
	int start, end, magicNumber, combination = 0, sum = 0;
	cin >> start >> end >> magicNumber;

	for (int firstNum = start; firstNum <= end; firstNum++)
	{
		for (int secondNum = start; secondNum <= end; secondNum++)
		{
			combination++;
			sum = firstNum + secondNum;
			if (sum == magicNumber)
			{
				cout << "Combination N:" << combination << " (" << firstNum << " + " << secondNum << " = " << sum << ")" << endl;
				return 0;
			}

		}

	}
	cout << combination << " combinations - neither equals " << magicNumber << endl;

}

