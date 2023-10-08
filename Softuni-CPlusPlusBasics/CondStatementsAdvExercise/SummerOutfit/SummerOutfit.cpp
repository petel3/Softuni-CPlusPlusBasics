#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int degrees;
    string partOfTheDay, outfit, shoes;


    cin >> degrees >> partOfTheDay;

    if (degrees >= 10 && degrees <= 18)
    {
        if (partOfTheDay == "Morning")
        {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (partOfTheDay == "Afternoon" || partOfTheDay == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (degrees > 18 && degrees <= 24)
    {
        if (partOfTheDay == "Morning" || partOfTheDay == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (partOfTheDay == "Afternoon")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    }
    else
    {
        if (partOfTheDay == "Morning")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (partOfTheDay == "Afternoon")
        {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
        else
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;
}
