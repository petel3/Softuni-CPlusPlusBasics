#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	double weather;
	cin >> weather;

	if (weather >= 26 && weather <= 35)
	{
		cout << "Hot" << endl;
	}
	else if (weather >= 20.1 && weather <= 25.9)
	{
		cout << "Warm" << endl;
	}
	else if (weather >= 15 && weather <= 20)
	{
		cout << "Mild" << endl;
	}
	else if (weather >= 12 && weather <= 14.9)
	{
		cout << "Cool" << endl;
	}
	else if (weather >= 5 && weather <= 11.9)
	{
		cout << "Cold" << endl;
	}
	else
	{
		cout << "unknown" << endl;
	}
}
