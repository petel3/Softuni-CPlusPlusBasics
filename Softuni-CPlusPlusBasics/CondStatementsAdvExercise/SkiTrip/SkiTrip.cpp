#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;
using std::getline;
using std::stoi;

int main()
{
    string daysInput, roomType, assasment;
    double totalPrice;
    getline(cin, daysInput);
    getline(cin, roomType);
    getline(cin, assasment);

    int days = stoi(daysInput);

    if (roomType == "room for one person")
    {
        totalPrice = 18 * (days - 1);
    }
    else if (roomType == "apartment")
    {
        totalPrice = 25 * (days - 1);
        if (days < 10)
        {
            totalPrice = totalPrice - totalPrice * 0.30;
        }
        else if (days > 10 && days < 15)
        {
            totalPrice = totalPrice - totalPrice * 0.35;
        }
        else if (days > 15)
        {
            totalPrice = totalPrice - totalPrice * 0.5;
        }
    }
    else if (roomType == "president apartment")
    {
        totalPrice = 35 * (days - 1);
        if (days <= 10)
        {
            totalPrice = totalPrice - totalPrice * 0.10;
        }
        else if (days > 10 && days < 15)
        {
            totalPrice = totalPrice - totalPrice * 0.15;
        }
        else if (days > 15)
        {
            totalPrice = totalPrice - totalPrice * 0.2;
        }
    }
    if (assasment == "positive")
    {
        totalPrice = totalPrice + totalPrice * 0.25;
    }
    else
    {
        totalPrice = totalPrice - totalPrice * 0.1;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalPrice;
}
