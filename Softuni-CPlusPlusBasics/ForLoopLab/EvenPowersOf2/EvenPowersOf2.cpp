#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int power;
	cin >> power;
	for (int i = 0; i <= power; i += 2)
	{
		cout << pow(2, i) << endl;
	}
}