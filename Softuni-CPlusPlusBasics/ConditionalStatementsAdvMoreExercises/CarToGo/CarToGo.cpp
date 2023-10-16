#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;


int main()
{
    double budget;
    string season, carClass, carType;

    cin >> budget >> season;

    if (budget <= 100)
    {
        carClass = "Economy class";
        if (season == "Summer")
        {
            carType = "Cabrio";
            budget = budget * 0.35;
        }
        else
        {
            carType = "Jeep";
            budget = budget * 0.65;
        }
    }
    else if (budget <= 500)
    {
        carClass = "Compact class";
        if (season == "Summer")
        {
            carType = "Cabrio";
            budget = budget * 0.45;
        }
        else
        {
            carType = "Jeep";
            budget = budget * 0.80;
        }
    }
    else
    {
        carClass = "Luxury class";
        carType = "Jeep";
        budget = budget * 0.90;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << carClass << endl;
    cout << carType << " - " << budget << endl;
}
