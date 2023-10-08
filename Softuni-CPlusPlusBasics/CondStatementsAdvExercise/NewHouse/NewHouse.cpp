#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;


int main()
{
    string typeFlower;
    int countOfFlower;
    double budget, totalPrice;
    cin >> typeFlower >> countOfFlower >> budget;

    if (typeFlower == "Roses")
    {
        totalPrice = countOfFlower * 5;
        if (countOfFlower > 80)
        {
            totalPrice = totalPrice - totalPrice * 0.1;
        }


    }
    else if (typeFlower == "Dahlias")
    {
        totalPrice = countOfFlower * 3.8;
        if (countOfFlower > 90)
        {
            totalPrice = totalPrice - totalPrice * 0.15;
        }
    }
    else if (typeFlower == "Tulips")
    {
        totalPrice = countOfFlower * 2.8;
        if (countOfFlower > 80)
        {
            totalPrice = totalPrice - totalPrice * 0.15;
        }
    }
    else if (typeFlower == "Narcissus")
    {
        totalPrice = countOfFlower * 3;
        if (countOfFlower < 120)
        {
            totalPrice = totalPrice + totalPrice * 0.15;
        }
    }
    else if (typeFlower == "Gladiolus")
    {
        totalPrice = countOfFlower * 2.5;
        if (countOfFlower < 80)
        {
            totalPrice = totalPrice + totalPrice * 0.2;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= totalPrice)
    {

        cout << "Hey, you have a great garden with " << countOfFlower << " " << typeFlower << " and " << budget - totalPrice << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money, you need " << totalPrice - budget << " leva more." << endl;
    }
}
