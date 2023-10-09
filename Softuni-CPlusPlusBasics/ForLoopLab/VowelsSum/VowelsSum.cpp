#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	getline(cin, text);
	int vowelsSum = 0;

	for (char letter : text)
	{
		if (letter == 'a')
		{
			vowelsSum += 1;
		}
		if (letter == 'e')
		{
			vowelsSum += 2;
		}
		if (letter == 'i')
		{
			vowelsSum += 3;
		}
		if (letter == 'o')
		{
			vowelsSum += 4;
		}
		if (letter == 'u')
		{
			vowelsSum += 5;
		}
	}
	cout << vowelsSum;
}
