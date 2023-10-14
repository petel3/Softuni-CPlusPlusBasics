#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::ios;

int main()
{
	int kilometers;
	string when;
	cin >> kilometers >> when;

	if (kilometers < 20)
	{
		if (when == "day")
		{
			double result = 0.7 + 0.79 * kilometers;
			cout.setf(ios::fixed);
			cout.precision(2);
			cout << result << endl;
		}
		else
		{
			double result = 0.7 + 0.9 * kilometers;
			cout.setf(ios::fixed);
			cout.precision(2);
			cout << result << endl;
		}
	}
	else if (kilometers >= 20 && kilometers < 100)
	{
		double result = 0.09 * kilometers;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << result << endl;
	}
	else if (kilometers >= 100)
	{
		double result = 0.06 * kilometers;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << result << endl;
	}
}
