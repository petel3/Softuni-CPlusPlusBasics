#include <iostream>

using namespace std;

int main()
{
    int n,patients,doctors=7,curedPatients=0,notCuredPatients=0;
    cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> patients;
		
		if (i%3==0)
		{
			if (notCuredPatients>curedPatients)
			{
				doctors++;
			}
		}
		patients < doctors ? curedPatients += patients: curedPatients += doctors, patients -= doctors;
		
		if (patients>0)
		{
			notCuredPatients += patients;
		}		
	}

	cout << "Treated patients: "<<curedPatients<<"." << endl;
	cout << "Untreated patients: " << notCuredPatients << "." << endl;
}
