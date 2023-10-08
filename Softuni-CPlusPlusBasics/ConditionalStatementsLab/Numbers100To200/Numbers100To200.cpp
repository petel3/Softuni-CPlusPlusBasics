#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int number;
	cin >> number;

	if (number < 100)
	{
		cout << "Less than 100" << endl;
	}
	else if (number >= 100 && number <= 200)
	{
		cout << "Between 100 and 200" << endl;
	}
	else
	{
		cout << "Greater than 200" << endl;
	}
}
