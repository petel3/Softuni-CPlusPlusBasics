#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double MAGNOLIANS_PRICE = 3.25;
    const double HYACINTHS_PRICE = 4;
    const double ROSES_PRICE = 3.50;
    const double CACTUS_PRICE = 8;

    int countMagnolians, countHyacinths, countRoses, countCactus;
    double priceOfGift;
    cin >> countMagnolians >> countHyacinths >> countRoses >> countCactus >> priceOfGift;

    double priceOfAllFlowers = countMagnolians * MAGNOLIANS_PRICE + countHyacinths * HYACINTHS_PRICE
        + countRoses * ROSES_PRICE + countCactus * CACTUS_PRICE;
    double tax = priceOfAllFlowers * 0.05;

    double finalPriceOfFlowers = priceOfAllFlowers - tax;

    if (priceOfGift <= finalPriceOfFlowers)
    {

        cout << "She is left with " << floor(finalPriceOfFlowers - priceOfGift) << " leva." << endl;
    }
    else
    {
        cout << "She will have to borrow " << ceil(priceOfGift - finalPriceOfFlowers) << " leva." << endl;
    }

}
