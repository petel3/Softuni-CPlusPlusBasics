#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,totalGrades=0;
	double grades,currentDisciplineGradesSum = 0, totalGradesSum = 0;
	string text;
    cin >> n;
	cin >> ws;
	cout.setf(ios::fixed);
	cout.precision(2);

	while (getline(cin,text) && text!="Finish")
	{
		for (int i = 1; i <=n; i++)
		{
			cin >> grades;
			currentDisciplineGradesSum += grades;
			totalGradesSum += grades;
			totalGrades++;
		}
		cout << text << " - " << currentDisciplineGradesSum / n << "." << endl;
		currentDisciplineGradesSum = 0;
		cin >> ws;
	}
	cout << "Student's final assessment is " << totalGradesSum / totalGrades << "." << endl;
}
