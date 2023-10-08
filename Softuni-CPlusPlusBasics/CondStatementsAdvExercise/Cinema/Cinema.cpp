#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
	string typeOfTicket;
	int rows, cols;
	double price, totalPrice;
	cin >> typeOfTicket >> rows >> cols;

	if (typeOfTicket == "Premiere")
	{
		price = 12.00;
	}
	else if (typeOfTicket == "Normal")
	{
		price = 7.50;
	}
	else if (typeOfTicket == "Discount")
	{
		price = 5.00;
	}
	cout << fixed << setprecision(2) << (rows * cols * price) << " leva" << endl;
}
