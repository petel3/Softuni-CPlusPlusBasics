#include <iostream>
#include <string>

using namespace std;

int main()
{
	string result = "", word;
	int countN = 0, countC = 0, countO = 0;

	while (cin >> word && word != "End")
	{
		char command = word[0];
		if (isalpha(command))
		{
			if (command == 'n' || command == 'N')
			{
				countN++;
				if (countN > 1)
				{
					result += command;
				}
			}
			else if (command == 'o' || command == 'O')
			{
				countO++;
				if (countO > 1)
				{
					result += command;
				}
			}
			else if (command == 'C' || command == 'c')
			{
				countC++;
				if (countC > 1)
				{
					result += command;
				}
			}
			else
			{
				result += command;
			}
			if (countC > 0 && countN >0 && countO > 0)
			{
				cout << result << " ";
				result = "";
				countC = 0;
				countN = 0;
				countO = 0;
			}
		}
	}
}