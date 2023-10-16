#include <iostream>

using namespace std;

int main()
{
	string season;
	double kilometersPerMonth,salary=0;
	cin >> season >> kilometersPerMonth;

	if (kilometersPerMonth<=5000)
	{
		if (season=="Spring" || season=="Autumn")
		{
			salary = kilometersPerMonth * 0.75;
		}
		else if (season=="Summer")
		{
			salary = kilometersPerMonth * 0.90;
		}
		else if (season=="Winter")
		{
			salary = kilometersPerMonth * 1.05;
		}
	}
	else if (kilometersPerMonth>5000 && kilometersPerMonth<=10000)
	{
		if (season == "Spring" || season == "Autumn")
		{
			salary = kilometersPerMonth * 0.95;
		}
		else if (season == "Summer")
		{
			salary = kilometersPerMonth * 1.10;
		}
		else if (season == "Winter")
		{
			salary = kilometersPerMonth * 1.25;
		}
	}
	else if (kilometersPerMonth>10000)
	{
		salary = kilometersPerMonth * 1.45;
	}
	salary = salary *4  * 0.9;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << salary << endl;
}
