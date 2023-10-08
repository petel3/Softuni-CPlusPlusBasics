#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;

int main()
{
    double budget, spendedMoney;
    string season, destination, typeOfVacation;

    cin >> budget >> season;

    if (budget <= 100)
    {
        destination = "Bulgaria";
        if (season == "summer")
        {
            spendedMoney = budget * 0.3;
            typeOfVacation = "Camp";
        }
        else if (season == "winter")
        {
            spendedMoney = budget * 0.7;
            typeOfVacation = "Hotel";
        }
    }
    else if (budget <= 1000)
    {
        destination = "Balkans";
        if (season == "summer")
        {
            spendedMoney = budget * 0.4;
            typeOfVacation = "Camp";
        }
        else if (season == "winter")
        {
            spendedMoney = budget * 0.8;
            typeOfVacation = "Hotel";
        }
    }
    else
    {
        destination = "Europe";
        spendedMoney = budget * 0.9;
        typeOfVacation = "Hotel";
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Somewhere in " << destination << endl;
    cout << typeOfVacation << " - " << spendedMoney << endl;
}
