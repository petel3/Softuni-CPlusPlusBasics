#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	double age;
	char gender;
	string title;

	cin >> age >> gender;

	if (age >= 16)
	{
		if (gender == 'm')
		{
			title = "Mr.";
		}
		else if (gender == 'f')
		{
			title = "Ms.";
		}
	}
	else if (age < 16)
	{
		if (gender == 'm')
		{
			title = "Master";
		}
		else if (gender == 'f')
		{
			title = "Miss";
		}
	}
	cout << title << endl;
}
