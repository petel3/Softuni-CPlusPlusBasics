#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int number;
	cin >> number;

	if (number <= 100 && number >= -100 && number != 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}