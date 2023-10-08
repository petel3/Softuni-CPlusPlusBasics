#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string password;
	cin >> password;

	if (password == "s3cr3t!P@ssw0rd")
	{
		cout << "Welcome" << endl;
	}
	else
	{
		cout << "Wrong password!" << endl;
	}
}

