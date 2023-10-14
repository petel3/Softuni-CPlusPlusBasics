#include <iostream>
#include <string>   

using namespace std;

int main()
{
    int countJoinery;
    double totalPrice = 0;
    string typeJoinery,delivery;
    cin >> countJoinery >> typeJoinery;
    cin >> ws;
    getline(cin, delivery);

    if (countJoinery<10)
    {
        cout << "Invalid order" << endl;
        return 0;
    }
    if (typeJoinery=="90X130")
    {
        if (countJoinery>30&& countJoinery<=60)
        {
            totalPrice = (110 * countJoinery) * 0.95;
        }
        else if (countJoinery>60)
        {
            totalPrice = (110 * countJoinery) * 0.92;
        }
    }
    else if (typeJoinery=="100X150")
    {
        if (countJoinery >= 40 && countJoinery <= 80)
        {
            totalPrice = (140 * countJoinery) * 0.94;
        }
        else if (countJoinery > 80)
        {
            totalPrice = (140 * countJoinery) * 0.9;
        }
    }
    else if (typeJoinery=="130X180")
    {
        if (countJoinery > 20 && countJoinery <= 50)
        {
            totalPrice = (190 * countJoinery) * 0.93;
        }
        else if (countJoinery > 50)
        {
            totalPrice = (190 * countJoinery) * 0.88;
        }
    }
    else if (typeJoinery=="200X300")
    {
        if (countJoinery > 25 && countJoinery <= 50)
        {
            totalPrice = (250 * countJoinery) * 0.91;
        }
        else if (countJoinery > 50)
        {
            totalPrice = (250 * countJoinery) * 0.86;
        }
    }
    if (delivery == "With delivery")
    {
        totalPrice += 60;
    }
    if (countJoinery>99)
    {
        totalPrice *= 0.96;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPrice << " BGN" << endl;
}
