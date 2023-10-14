#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
	const int DAYS = 365;
	const int WORK_DAYS_TIME = 63;
	const int REST_DAYS_TIME = 127;
	const int MINUTES_OF_PLAY_PER_YEAR = 30000;

	int restDays;
	cin >> restDays;

	int workDays = DAYS - restDays;

	int playTimeInMinutes = workDays * WORK_DAYS_TIME + restDays * REST_DAYS_TIME;


	if (MINUTES_OF_PLAY_PER_YEAR < playTimeInMinutes)
	{
		int neededTimeForRest = playTimeInMinutes - MINUTES_OF_PLAY_PER_YEAR;
		int minutes = neededTimeForRest % 60;
		int hours = neededTimeForRest / 60;

		cout << "Tom will run away" << endl;
		cout << hours << " hours and " << minutes << " minutes more for play" << endl;
	}
	else
	{
		int neededTimeForRest = MINUTES_OF_PLAY_PER_YEAR - playTimeInMinutes;
		int minutes = neededTimeForRest % 60;
		int hours = neededTimeForRest / 60;
		cout << "Tom sleeps well" << endl;
		cout << hours << " hours and " << minutes << " minutes less for play" << endl;
	}

}