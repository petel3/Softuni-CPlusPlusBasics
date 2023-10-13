#include <iostream>

using namespace std;

int main()
{
	int n, currentRow;
	cin >> n;
	currentRow = 1;
	bool isBigger = false;

	for (int rows = 1; rows <= n; rows++)
	{
		for (int cols = 1; cols <= rows; cols++)
		{
			if (currentRow > n)
			{
				isBigger = true;
				break;
			}
			cout << currentRow << " ";
			currentRow++;
		}
		if (isBigger)
		{
			break;
		}
		cout << endl;
	}

}
