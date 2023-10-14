#include <iostream>

using namespace std;

int main()
{
	int start, end, s1 = 0, s2 = 0, s3 = 0, s4 = 0, e1 = 0, e2 = 0, e3 = 0, e4 = 0;
	cin >> start >> end;


	s1 = start / 1000;
	s2 = start / 100;
	s2 = s2 % 10;
	s3 = start / 10;
	s3 = s3 % 10;
	s4 = start % 10;

	e1 = end / 1000;
	e2 = end / 100;
	e2 = e2 % 10;
	e3 = end / 10;
	e3 = e3 % 10;
	e4 = end % 10;

	for (int i1 = s1; i1 <= e1; i1++)
	{
		for (int i2 = s2; i2 <= e2; i2++)
		{
			for (int i3 = s3; i3 <= e3; i3++)
			{
				for (int i4 = s4; i4 <= e4; i4++)
				{
					if (i1 % 2 != 0 && i2 % 2 != 0 && i3 % 2 != 0 && i4 % 2 != 0)
					{
						cout << i1 << i2 << i3 << i4 << " ";
					}

				}
			}
		}
	}
}
