#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int num;
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "even" << endl;
	}
	else
	{
		cout << "odd" << endl;
	}
}