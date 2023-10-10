#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main()
{
	int minNumber = INT_MAX;
	string input;
	cin >> input;
	while (input != "Stop")
	{
		int number = stoi(input);
		if (minNumber > number)
		{
			minNumber = number;
		}
		cin >> input;
	}
	cout << minNumber << endl;
}
