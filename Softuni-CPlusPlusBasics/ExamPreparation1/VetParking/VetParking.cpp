#include <iostream>

using namespace std;

int main()
{
    int days, hours;
	double totalTax = 0;
	cin >> days >> hours;

	cout.setf(ios::fixed);
	cout.precision(2);

	for (int day = 1; day <= days; day++)
	{
		double currentDayTax = 0;
		for (int hour = 1; hour <= hours; hour++)
		{
			if (day%2==0 && hour%2!=0)
			{
				currentDayTax += 2.5;
			}
			else if (day%2!=0 && hour%2==0)
			{
				currentDayTax += 1.25;
			}
			else
			{
				currentDayTax++;
			}
			
		} 
		totalTax += currentDayTax;
		cout << "Day: " << day << " - " << currentDayTax << " leva" << endl;
	}
	cout << "Total: "<<totalTax<<" leva" << endl;
}