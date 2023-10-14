#include <iostream>
#include <string>

using namespace std;

int main()
{
    string player,bestPlayer;
    int goals,bestResult=0;

	while (getline(cin,player)&&player!="END")
	{
		
		
		cin >> goals;
		
		if (bestResult <goals)
		{
			bestPlayer = player;
			bestResult = goals;
		}
		if (goals >= 10)
		{
			break;
		}
		cin >> ws;
	}
	cout << bestPlayer << " is the best player!" << endl;
	if (bestResult>=3)
	{
		cout << "He has scored " << bestResult << " goals and made a hat-trick !!!" << endl;
	}
	else
	{
		cout << "He has scored " << bestResult << " goals." << endl;
	}
}
