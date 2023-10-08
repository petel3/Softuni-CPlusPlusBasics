#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string day;
    cin >> day;

    int price;

    if (day == "Thursday" || day == "Wednesday")
    {
        price = 14;
    }
    else if (day == "Sunday" || day == "Saturday")
    {
        price = 16;
    }
    else
    {
        price = 12;
    }
    cout << price << endl;
}

