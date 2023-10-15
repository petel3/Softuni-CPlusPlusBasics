#include <iostream>

using namespace std;

int main()
{
    int students;
	double grades, p1 = 0, p2 = 0, p3 = 0, p4 = 0,sumOfGrades=0;
    cin >> students;

	for (int i = 1; i <= students; i++)
	{
		cin >> grades;
		if (grades>=2 && grades<=2.99)
		{
			p1++;
		}
		else if (grades>=3.00&&grades<=3.99)
		{
			p2++;
		}
		else if (grades>=4.00 && grades<=4.99)
		{
			p3++;
		}
		else if (grades>=5)
		{
			p4++;
		}
		sumOfGrades += grades;
	}

	p1 = p1 / students * 100.0;
	p2 = p2 / students * 100.0;
	p3 = p3 / students * 100.0;
	p4 = p4 / students * 100.0;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Top students: " << p4 << "%" << endl;
	cout << "Between 4.00 and 4.99: " << p3 << "%" << endl;
	cout << "Between 3.00 and 3.99: " << p2 << "%" << endl;
	cout << "Fail: " << p1 << "%" << endl;
	cout << "Average: " << sumOfGrades/students <<  endl;

}
