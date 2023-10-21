#include <iostream>
#include <string>

using namespace std;

int main()
{
	int neededMoney,transaction,counter=0,counterCash=0,counterCard=0;
	cin >> neededMoney;
	string command;
	double totalMoneyCard=0,totalMoneyCash=0;
	while (cin>>command&&command!="End")

	{
		transaction = stoi(command);
		counter++;
		if (counter%2==0)
		{
			if (transaction<10)
			{
				cout << "Error in transaction!" << endl;
			}
			else
			{
				totalMoneyCard += transaction;
				counterCard++;
				cout << "Product sold!" << endl;
			}
		}
		else
		{
			if (transaction > 100)
			{
				cout << "Error in transaction!" << endl;
			}
			else
			{	
				totalMoneyCash += transaction;
				counterCash++;
				cout << "Product sold!" << endl;
			}
		}
		if (neededMoney<= totalMoneyCash+ totalMoneyCard)
		{
			cout.setf(ios::fixed);
			cout.precision(2);
			cout << "Average CS: " << totalMoneyCash / counterCash << endl;
			cout << "Average CC: " << totalMoneyCard / counterCard << endl;
			return 0;
		}
	}
	if (neededMoney>totalMoneyCard+totalMoneyCash)
	{
		cout << "Failed to collect required money for charity." << endl;
	}
}
