#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main()
{
	int maxNumber = INT_MIN;
	string input;
	cin >> input;
	while (input != "Stop")
	{
		int number = stoi(input);
		if (maxNumber < number)
		{
			maxNumber = number;
		}
		cin >> input;
	}
	cout << maxNumber << endl;
}
