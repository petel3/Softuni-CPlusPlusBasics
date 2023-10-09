#include <iostream>

using namespace std;

int main()
{
	int n, peopleCounter = 0;
	double m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int people;
		cin >> people;
		peopleCounter += people;
		if (people <= 5)
		{
			m1 += people;
		}
		else if (people <= 12)
		{
			m2 += people;
		}
		else if (people <= 25)
		{
			m3 += people;
		}
		else if (people <= 40)
		{
			m4 += people;
		}
		else if (people > 40)
		{
			m5 += people;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << m1 / peopleCounter * 100 << "%" << endl;
	cout << m2 / peopleCounter * 100 << "%" << endl;
	cout << m3 / peopleCounter * 100 << "%" << endl;
	cout << m4 / peopleCounter * 100 << "%" << endl;
	cout << m5 / peopleCounter * 100 << "%" << endl;
}
