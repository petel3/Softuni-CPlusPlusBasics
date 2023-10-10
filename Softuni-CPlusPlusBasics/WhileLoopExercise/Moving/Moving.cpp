#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int width, length, heigh, freeSpace, usedSpace = 0;
	cin >> width >> length >> heigh;
	freeSpace = width * length * heigh;

	while (cin >> input && input != "Done")
	{
		int boxes = stoi(input);
		usedSpace += boxes;
		if (usedSpace > freeSpace)
		{
			cout << "No more free space! You need " << usedSpace - freeSpace << " Cubic meters more." << endl;
			break;
		}
	}
	if (freeSpace >= usedSpace)
	{
		cout << freeSpace - usedSpace << " Cubic meters left." << endl;
	}

}
