#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,totalPoints=0,otherColors=0,countDivided=0,countRedBalls=0,countOrangeBalls=0,countYellowBalls=0,countWhiteBalls=0;
	cin >> n;

	string ball;
	for (int i = 1; i <= n; i++)
	{
		cin >> ball;
		if (ball=="red")
		{
			countRedBalls++;
			totalPoints += 5;
		}
		else if (ball=="orange")
		{
			countOrangeBalls++;
			totalPoints += 10;
		}
		else if (ball=="yellow")
		{
			countYellowBalls++;
			totalPoints += 15;
		}
		else if (ball=="white")
		{
			countWhiteBalls++;
			totalPoints += 20;
		}
		else if (ball=="black")
		{
			countDivided++;
			totalPoints = floor(totalPoints/2);
		}
		else
		{
			otherColors++;
		}
	}
	cout << "Total points: " << totalPoints << endl;
	cout << "Red balls: " << countRedBalls << endl;
	cout << "Orange balls: " << countOrangeBalls << endl;
	cout << "Yellow balls: " << countYellowBalls << endl;
	cout << "White balls: " << countWhiteBalls << endl;
	cout << "Other colors picked: " << otherColors << endl;
	cout << "Divides from black balls: " << countDivided << endl;
}
