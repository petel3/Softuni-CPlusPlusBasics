#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

int main()
{
    const double VIDEO_CARD_PRICE = 250;


    double budget, finalResult;

    int countVideoCards, countProcessors, countRamMemory;
    cin >> budget >> countVideoCards >> countProcessors >> countRamMemory;

    double priceOfVideoCards = countVideoCards * VIDEO_CARD_PRICE;
    double priceOfProcessors = countProcessors * (priceOfVideoCards * 0.35);
    double priceOfRamMemories = countRamMemory * (priceOfVideoCards * 0.1);
    double totalPrice = priceOfVideoCards + priceOfProcessors + priceOfRamMemories;


    if (countVideoCards > countProcessors)
    {
        totalPrice = totalPrice - totalPrice * 0.15;


    }
    if (budget >= totalPrice)
    {
        finalResult = budget - totalPrice;

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "You have " << finalResult << " leva left!" << endl;
    }
    else
    {
        finalResult = totalPrice - budget;

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Not enough money! You need " << finalResult << " leva more!" << endl;
    }

}
