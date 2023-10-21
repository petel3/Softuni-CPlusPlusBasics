#include <iostream>

using namespace std;

int main()
{
    double num;
    
	while (cin >> num && num>=0)
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Result: " << num * 2 << endl;
	}
	cout << "Negative number!";
}
