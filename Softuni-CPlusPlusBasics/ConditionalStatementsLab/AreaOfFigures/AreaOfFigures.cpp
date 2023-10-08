#include <iostream>

using namespace std;


int main()
{
	const double PI = 3.14159265359;
	string figure;
	cin >> figure;

	if (figure == "square")
	{
		double side;
		cin >> side;

		double area = side * side;

		cout.setf(ios::fixed);
		cout.precision(3);
		cout << area << endl;
	}
	else if (figure == "rectangle")
	{
		double a, b;
		cin >> a >> b;

		double area = a * b;

		cout.setf(ios::fixed);
		cout.precision(3);
		cout << area << endl;
	}
	else if (figure == "circle")
	{
		double radius;
		cin >> radius;

		double area = radius * radius * PI;

		cout.setf(ios::fixed);
		cout.precision(3);
		cout << area << endl;
	}
	else if (figure == "triangle")
	{
		double length, heigh;
		cin >> length >> heigh;

		double area = (length * heigh) / 2;

		cout.setf(ios::fixed);
		cout.precision(3);
		cout << area << endl;
	}
}
