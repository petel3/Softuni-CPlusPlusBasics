#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double money;
	int years,age=18;
	cin >> money>>years;
	for (int year = 1800; year <= years; year++)
	{
		if (year %2==0)
		{
			money -= 12000;
		}
		else
		{
			money -= 12000 + 50 * age;
		}
		age++;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	if (money>=0)
	{
		cout << "Yes! He will live a carefree life and will have "<<money<<" dollars left." << endl;
	}
	else
	{
		cout << "He will need " << abs(money) << " dollars to survive." << endl;
	}
}
