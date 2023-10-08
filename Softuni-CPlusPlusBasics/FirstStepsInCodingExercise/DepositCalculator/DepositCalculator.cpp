#include <iostream>

using std::cin;
using std::cout;

int main()
{
	double depositSum, yearInterest;
	int termOfDeposit;

	cin >> depositSum;
	cin >> termOfDeposit;
	cin >> yearInterest;

	double percentageCalculationOfYearInterest = yearInterest / 100;
	double result = depositSum + termOfDeposit * ((depositSum * percentageCalculationOfYearInterest) / 12);

	cout << result;

}

