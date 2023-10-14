#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string fuel;
	int liters;
	cin >> fuel >> liters;

	if (fuel == "Diesel" && liters >= 25)
	{
		cout << "You have enough " << "diesel" << "." << endl;

	}
	else if (fuel == "Diesel" && liters < 25)
	{
		cout << "Fill your tank with " << "diesel" << "!" << endl;
	}
	else if (fuel == "Gasoline" && liters >= 25)
	{
		cout << "You have enough " << "gasoline" << "." << endl;

	}
	else if (fuel == "Gasoline" && liters < 25)
	{
		cout << "Fill your tank with " << "gasoline" << "!" << endl;
	}
	else if (fuel == "Gas" && liters >= 25)
	{
		cout << "You have enough " << "gas" << "." << endl;

	}
	else if (fuel == "Gas" && liters < 25)
	{
		cout << "Fill your tank with " << "gas" << "!" << endl;
	}
	else
	{
		cout << "Invalid fuel!" << endl;
	}
}
