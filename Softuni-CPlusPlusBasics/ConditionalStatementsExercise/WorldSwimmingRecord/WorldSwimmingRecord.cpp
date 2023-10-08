#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;


int main()
{
	double recordInSeconds, distanceInMeters, timeInSecondsPerMeter;
	cin >> recordInSeconds >> distanceInMeters >> timeInSecondsPerMeter;

	int distanceAtEveryFifteenMeters = distanceInMeters / 15;
	double additionalMetersInSeconds = distanceAtEveryFifteenMeters * 12.5;
	double newRecord = distanceInMeters * timeInSecondsPerMeter + additionalMetersInSeconds;

	if (recordInSeconds <= newRecord)
	{
		double result = newRecord - recordInSeconds;

		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "No, he failed! He was " << result << " seconds slower." << endl;
	}
	else if (recordInSeconds > newRecord)
	{


		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Yes, he succeeded! The new world record is " << newRecord << " seconds." << endl;
	}
}