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
    string season, location, accommodate;

    cin >> budget >> season;

    if (budget <= 1000)
    {
        accommodate = "Camp";
        if (season == "Summer")
        {
            location = "Alaska";
            budget = budget * 0.65;
        }
        else
        {
            location = "Morocco";
            budget = budget * 0.45;
        }
    }
    else if (budget <= 3000)
    {
        accommodate = "Hut";
        if (season == "Summer")
        {
            location = "Alaska";
            budget = budget * 0.80;
        }
        else
        {
            location = "Morocco";
            budget = budget * 0.60;
        }
    }
    else
    {
        accommodate = "Hotel";
        if (season == "Summer")
        {
            location = "Alaska";
            budget = budget * 0.90;
        }
        else
        {
            location = "Morocco";
            budget = budget * 0.90;
        }
    }cout.setf(ios::fixed);
    cout.precision(2);
    cout << location << " - " << accommodate << " - " << budget << endl;
}
