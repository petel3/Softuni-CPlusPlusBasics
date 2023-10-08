#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;

int main()
{
    int budget, countPeople;
    double totalPrice;
    string season;

    cin >> budget >> season >> countPeople;

    if (season == "Spring")
    {
        totalPrice = 3000;
        if (countPeople <= 6)
        {
            totalPrice = totalPrice - totalPrice * 0.1;
        }
        else if (countPeople >= 7 && countPeople <= 11)
        {
            totalPrice = totalPrice - totalPrice * 0.15;
        }
        else
        {
            totalPrice = totalPrice - totalPrice * 0.25;
        }
    }
    else if (season == "Summer" || season == "Autumn")
    {
        totalPrice = 4200;
        if (countPeople <= 6)
        {
            totalPrice = totalPrice - totalPrice * 0.1;
        }
        else if (countPeople >= 7 && countPeople <= 11)
        {
            totalPrice = totalPrice - totalPrice * 0.15;
        }
        else
        {
            totalPrice = totalPrice - totalPrice * 0.25;
        }
    }
    else
    {
        totalPrice = 2600;
        if (countPeople <= 6)
        {
            totalPrice = totalPrice - totalPrice * 0.1;
        }
        else if (countPeople >= 7 && countPeople <= 11)
        {
            totalPrice = totalPrice - totalPrice * 0.15;
        }
        else
        {
            totalPrice = totalPrice - totalPrice * 0.25;
        }
    }
    if (countPeople % 2 == 0 && season != "Autumn")
    {
        totalPrice = totalPrice - totalPrice * 0.05;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= totalPrice)
    {
        cout << "Yes! You have " << budget - totalPrice << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << totalPrice - budget << " leva." << endl;
    }
}
