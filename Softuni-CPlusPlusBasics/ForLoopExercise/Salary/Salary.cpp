#include <iostream>

using namespace std;

int main()
{
	int n, salary;
	cin >> n >> salary;
	for (int i = 1; i <= n; i++)
	{
		string tab;

		cin >> tab;
		if (tab == "Facebook")
		{
			salary -= 150;
		}
		else if (tab == "Instagram")
		{
			salary -= 100;
		}
		else if (tab == "Reddit")
		{
			salary -= 50;
		}
		if (salary <= 0)
		{
			cout << "You have lost your salary." << endl;
			break;
		}
	}
	if (salary > 0)
	{
		cout << salary;
	}
}
