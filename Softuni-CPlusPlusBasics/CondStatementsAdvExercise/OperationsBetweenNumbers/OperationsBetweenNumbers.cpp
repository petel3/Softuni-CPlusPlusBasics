#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;

int main()
{
    int n1, n2;
    string operation;

    cin >> n1 >> n2 >> operation;

    if (n2 == 0 && (operation == "%" || operation == "/"))
    {
        cout << "Cannot divide " << n1 << " by zero" << endl;
    }
    else if (operation == "%")
    {
        int result = n1 % n2;
        cout << n1 << " " << operation << " " << n2 << " = " << result << endl;
    }
    else if (operation == "/")
    {
        double result = 1.00 * n1 / n2;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << n1 << " " << operation << " " << n2 << " = " << result << endl;
    }
    else if (operation == "*")
    {
        int result = n1 * n2;
        if (result % 2 == 0)
        {
            cout << n1 << " " << operation << " " << n2 << " = " << result << " - even" << endl;
        }
        else
        {
            cout << n1 << " " << operation << " " << n2 << " = " << result << " - odd" << endl;
        }

    }
    else if (operation == "-")
    {
        int result = n1 - n2;
        if (result % 2 == 0)
        {
            cout << n1 << " " << operation << " " << n2 << " = " << result << " - even" << endl;
        }
        else
        {
            cout << n1 << " " << operation << " " << n2 << " = " << result << " - odd" << endl;
        }
    }
    else if (operation == "+")
    {
        int result = n1 + n2;
        if (result % 2 == 0)
        {
            cout << n1 << " " << operation << " " << n2 << " = " << result << " - even" << endl;
        }
        else
        {
            cout << n1 << " " << operation << " " << n2 << " = " << result << " - odd" << endl;
        }
    }
}
