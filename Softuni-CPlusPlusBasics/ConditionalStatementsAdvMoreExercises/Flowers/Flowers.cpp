#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;


int main()
{
    int countChrysanthemums, countRoses, countTulips;
    string season, isHoliday;
    double totalPrice;

    cin >> countChrysanthemums >> countRoses >> countTulips >> season >> isHoliday;

    if (season == "Spring" || season == "Summer")
    {
        totalPrice = countChrysanthemums * 2 + countRoses * 4.1 + countTulips * 2.5;
        if (countTulips > 7 && season == "Spring")
        {
            totalPrice = totalPrice - totalPrice * 0.05;
        }
    }
    else
    {
        totalPrice = countChrysanthemums * 3.75 + countRoses * 4.5 + countTulips * 4.15;
        if (season == "Winter" && countRoses >= 10)
        {
            totalPrice = totalPrice - totalPrice * 0.1;
        }
    }
    if (isHoliday == "Y")
    {
        totalPrice = totalPrice + totalPrice * 0.15;
    }
    if ((countChrysanthemums + countRoses + countTulips) > 20)
    {
        totalPrice = totalPrice - totalPrice * 0.2;
    }
    totalPrice += 2;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalPrice << endl;
}
