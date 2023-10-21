#include <iostream>

using namespace std;

int main()
{
	double x1, y1, x2, y2, x, y;
	cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

	if (x1 < x2 && y1 < y2)
	{
		if (x == x1 || x == x2)
		{
			if (y<y1 || y>y2 && y < y1 || y > y2)
			{
				cout << "Inside / Outside";
			}
			else
			{
				cout << "Border";
			}
		}
		else if (y == y1 || y == y2)
		{
			if (x<x1 || x>x2 && x < x1 || x > x2)
			{
				cout << "Inside / Outside";
			}
			else
			{
				cout << "Border";
			}
		}
		else
		{
			cout << "Inside / Outside";
		}
	}
}