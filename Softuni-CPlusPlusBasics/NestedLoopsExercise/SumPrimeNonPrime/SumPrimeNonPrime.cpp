#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int primeSum = 0, nonPrimeSum = 0;
	string input;
	while (cin >> input && input != "stop")
	{
		int num = stoi(input);

		if (num < 0)
		{
			cout << "Number is negative." << endl;
		}
		else
		{
			bool isPrime = true;
			double numberSqrt = sqrt(num);

			for (int i = 2; i <= numberSqrt; i++)
			{
				if (num % i == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
			{
				primeSum += num;
			}
			else
			{
				nonPrimeSum += num;
			}
		}
	}
	cout << "Sum of all prime numbers is: " << primeSum << endl;
	cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;
}
