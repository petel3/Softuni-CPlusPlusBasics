#include <iostream>
#include<string>

using namespace std;

int main()
{
	string input;

	int totalSteps = 0;
	bool shouldContinue = true, goalIsReached = false;
	int steps;
	while (shouldContinue && !goalIsReached)
	{
		getline(cin, input);

		if (input == "Going home")
		{
			cin >> steps;
			shouldContinue = false;
		}
		else
		{
			steps = stoi(input);
		}
		totalSteps += steps;
		if (totalSteps >= 10000)
		{
			goalIsReached = true;
		}
	}
	if (goalIsReached)
	{
		cout << "Goal reached! Good job!" << endl;
	}
	else
	{
		cout << 10000 - totalSteps << " more steps to reach goal." << endl;
	}
}
