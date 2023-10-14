#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string weather;
	cin >> weather;

	if (weather == "sunny")
	{
		cout << "It's warm outside!" << endl;
	}
	else
	{
		cout << "It's cold outside!" << endl;
	}
}
