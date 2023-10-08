#include <iostream>

using std::ios;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double budget, clothes;
    int actors;
    cin >> budget >> actors >> clothes;

    double clothesPrice = actors * clothes;
    double decor = budget * 0.1;

    if (actors > 150)
    {
        clothesPrice *= 0.9;
    }
    double totalPrice = decor + clothesPrice;

    if (budget < totalPrice)
    {
        double neededMoney = totalPrice - budget;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << neededMoney << " leva more." << endl;

    }

    else
    {
        double restMoney = budget - totalPrice;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << restMoney << " leva left." << endl;
    }
}