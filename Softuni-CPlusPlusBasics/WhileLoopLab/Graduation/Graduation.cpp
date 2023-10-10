#include <iostream>

using namespace std;

int main()
{
	string student;
	int schoolYears = 0, failedYears = 0;
	double grades, sumOfGrades = 0;
	bool isGraduated = true;
	cin >> student;
	while (schoolYears < 12)
	{
		cin >> grades;
		if (grades < 4)
		{
			failedYears++;
			if (failedYears == 2) {
				cout << student << " has been excluded at " << schoolYears << " grade" << endl;
				isGraduated = false;
				break;
			}
		}
		else
		{
			sumOfGrades += grades;
		}
		schoolYears++;
	}
	if (isGraduated)
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << student << " graduated. Average grade: " << sumOfGrades / 12;
	}
}
