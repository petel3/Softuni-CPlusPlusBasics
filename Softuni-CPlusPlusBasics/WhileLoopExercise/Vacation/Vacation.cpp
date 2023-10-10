#include <iostream>

using namespace std;

int main()
{
	int daysGone = 0, spendCount = 0;
	double neededMoney, currentMoney, savedMoney = 0;
	cin >> neededMoney >> currentMoney;
	bool isMoneyCollected = true;
	while (neededMoney > currentMoney)
	{
		daysGone++;
		string command;
		double money;
		cin >> command >> money;
		if (command == "spend")
		{
			currentMoney -= money;
			if (currentMoney < 0)
			{
				currentMoney = 0;
			}
			spendCount++;
			if (spendCount == 5)
			{
				cout << "You can't save the money." << endl;
				cout << daysGone << endl;
				isMoneyCollected = false;
				break;
			}
		}
		else if (command == "save")
		{
			spendCount = 0;
			currentMoney += money;
		}
	}
	if (isMoneyCollected)
	{
		cout << "You saved the money for " << daysGone << " days." << endl;
	}
}
