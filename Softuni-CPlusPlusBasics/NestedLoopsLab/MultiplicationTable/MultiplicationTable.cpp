#include <iostream>

using namespace std;

int main()
{
	for (int leftNum = 1; leftNum <= 10; leftNum++)
	{
		for (int rightNum = 1; rightNum <= 10; rightNum++)
		{
			cout << leftNum << " * " << rightNum << " = " << leftNum * rightNum << endl;
		}
	}
}
