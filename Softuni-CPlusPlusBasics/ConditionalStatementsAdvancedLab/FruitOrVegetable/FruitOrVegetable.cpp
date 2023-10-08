#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string type;
	cin >> type;

	if (type == "banana" || type == "apple" || type == "kiwi" || type == "cherry" || type == "lemon" || type == "grapes")
	{
		cout << "fruit" << endl;
	}
	else if (type == "tomato" || type == "cucumber" || type == "pepper" || type == "carrot")
	{
		cout << "vegetable" << endl;
	}
	else
	{
		cout << "unknown" << endl;
	}
}
