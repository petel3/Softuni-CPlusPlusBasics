#include <iostream>
#include <string>

using namespace std;


int main()
{
	cout.setf(ios::fixed);
	cout.precision(2);

	double totalMoney = 0;
	string input;
	cin >> input;
	while (input != "NoMoreMoney")
	{
		if (input == "NoMoreMoney")
		{
			break;
		}
		double money = stod(input);
		if (money < 0)
		{
			cout << "Invalid operation!" << endl;
			break;
		}
		else
		{
			totalMoney += money;

			cout << "Increase: " << money << endl;
		}
		cin >> input;
	}
	cout << "Total: " << totalMoney << endl;
}
