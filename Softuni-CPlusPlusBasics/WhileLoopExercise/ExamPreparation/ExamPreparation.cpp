#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numberOfBadGrades, countBadGrades = 0, countGoodGrades = 0;
	cin >> numberOfBadGrades;
	cin.ignore();
	string task, lastTask = "";
	double grade, totalGrade = 0;
	getline(cin, task);

	bool isWithoutPoorGrades = true;

	while (task != "Enough")
	{
		int grade;
		cin >> grade;

		if (grade > 4)
		{
			totalGrade += grade;
			countGoodGrades++;
		}
		else
		{
			totalGrade += grade;

			countBadGrades++;
			countGoodGrades++;
			if (countBadGrades == numberOfBadGrades)
			{

				cout << "You need a break, " << countBadGrades << " poor grades." << endl;
				isWithoutPoorGrades = false;
				break;
			}
		}
		lastTask = task;
		cin.ignore();
		getline(cin, task);
	}
	if (isWithoutPoorGrades)
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Average score: " << totalGrade / countGoodGrades << endl;
		cout << "Number of problems: " << countGoodGrades << endl;
		cout << "Last problem: " << lastTask << endl;
	}
}
