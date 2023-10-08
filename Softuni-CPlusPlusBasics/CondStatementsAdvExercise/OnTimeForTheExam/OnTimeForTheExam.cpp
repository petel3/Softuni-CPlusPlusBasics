#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int examHours, examMinutes, arrivalHours, arrivalMinutes;

	cin >> examHours >> examMinutes >> arrivalHours >> arrivalMinutes;

	int examTimeInMinutes = examHours * 60 + examMinutes;
	int arrivalTimeInMinutes = arrivalHours * 60 + arrivalMinutes;
	int diffInTime = examTimeInMinutes - arrivalTimeInMinutes;


	if (diffInTime >= 0 && diffInTime <= 30)
	{
		if (diffInTime == 0)
		{
			cout << "On time" << endl;
		}


		else
		{
			cout << "On time" << endl;
			cout << abs(diffInTime) << " minutes before the start" << endl;

		}
	}
	else if (diffInTime > 30)
	{
		cout << "Early" << endl;

		if (abs(diffInTime) >= 60)
		{
			diffInTime = abs(diffInTime);
			int hours = diffInTime / 60;
			int minutes = diffInTime % 60;
			if (minutes < 10)
			{
				cout << hours << ":0" << minutes << " hours before the start" << endl;
			}
			else
			{
				cout << hours << ":" << minutes << " hours before the start" << endl;
			}

		}
		else
		{
			cout << abs(diffInTime) << " minutes before the start" << endl;
		}

	}
	else if (diffInTime < 0)
	{
		cout << "Late" << endl;
		if (abs(diffInTime) >= 60)
		{
			diffInTime = abs(diffInTime);
			int hours = diffInTime / 60;
			int minutes = diffInTime % 60;
			if (minutes < 10)
			{
				cout << hours << ":0" << minutes << " hours after the start" << endl;
			}
			else
			{
				cout << hours << ":" << minutes << " hours after the start" << endl;
			}
		}
		else
		{
			cout << abs(diffInTime) << " minutes after the start" << endl;
		}
	}

}
