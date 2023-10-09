#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	getline(cin, text);

	for (char letter : text)
	{
		cout << letter << endl;
	}
}
