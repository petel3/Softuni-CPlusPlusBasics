#include <iostream>

using namespace std;

int main()
{
	string username, password, passwordInput;
	cin >> username >> password >> passwordInput;

	while (password != passwordInput)
	{
		cin >> passwordInput;


	}
	cout << "Welcome " << username << "!" << endl;
}
