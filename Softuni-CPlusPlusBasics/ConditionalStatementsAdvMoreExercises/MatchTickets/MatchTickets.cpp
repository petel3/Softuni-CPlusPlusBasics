#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;

int main()
{
	const double PRICE_VIP = 499.99;
	const double PRICE_NORMAL = 249.99;

	double budget, totalPrice;
	string typeTicket;
	int countPeople;

	cin >> budget >> typeTicket >> countPeople;

	if (countPeople >= 1 && countPeople <= 4)
	{
		totalPrice = budget * 0.75;
	}
	else if (countPeople >= 5 && countPeople <= 9)
	{
		totalPrice = budget * 0.6;
	}
	else if (countPeople >= 10 && countPeople <= 24)
	{
		totalPrice = budget * 0.5;
	}
	else if (countPeople >= 25 && countPeople <= 49)
	{
		totalPrice = budget * 0.4;
	}
	else if (countPeople >= 50)
	{
		totalPrice = budget * 0.25;
	}
	if (typeTicket == "VIP")
	{
		totalPrice += countPeople * PRICE_VIP;
	}
	else
	{
		totalPrice += countPeople * PRICE_NORMAL;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	if (budget >= totalPrice)
	{
		cout << "Yes! You have " << budget - totalPrice << " leva left." << endl;
	}
	else
	{
		cout << "Not enough money! You need " << totalPrice - budget << " leva." << endl;
	}
}
