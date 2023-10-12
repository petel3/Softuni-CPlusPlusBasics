#include <iostream>
#include <string>

using namespace std;

int main()
{
	string destination;
	double minimumBudget, money;

	while (cin >> destination && destination != "End")
	{
		cin >> minimumBudget;
		double savedMoney = 0;
		while (savedMoney < minimumBudget)
		{
			cin >> money;
			savedMoney += money;

		}
		cout << "Going to " << destination << "!" << endl;
	}

}
