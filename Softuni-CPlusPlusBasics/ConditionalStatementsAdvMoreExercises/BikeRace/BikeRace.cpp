#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;

int main()
{
    int juniors, seniors;
    string raceType;
    double totalPrice;

    cin >> juniors >> seniors >> raceType;

    if (raceType == "trail")
    {
        totalPrice = juniors * 5.50 + seniors * 7;
    }
    else if (raceType == "cross-country")
    {
        totalPrice = juniors * 8 + seniors * 9.5;
        if ((juniors + seniors) >= 50)
        {
            totalPrice = totalPrice - totalPrice * 0.25;
        }
    }
    else if (raceType == "downhill")
    {
        totalPrice = juniors * 12.25 + seniors * 13.75;
    }
    else if (raceType == "road")
    {
        totalPrice = juniors * 20 + seniors * 21.5;
    }
    totalPrice = totalPrice - totalPrice * 0.05;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalPrice;
}
