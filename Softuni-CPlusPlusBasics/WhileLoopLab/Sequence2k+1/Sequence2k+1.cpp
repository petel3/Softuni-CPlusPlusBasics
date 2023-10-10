#include <iostream>

using namespace std;

int main()
{
	int num, result;
	cin >> num;
	result = 1;
	while (result <= num)
	{
		cout << result << endl;
		result = result * 2 + 1;

	}
}
