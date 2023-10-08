#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const double PACK_OF_PENCILS = 5.80;
    const double PACK_OF_MARKERS = 7.2;
    const double PREPARATION_PER_LITER = 1.2;

    int pencilsPack, markersPack, litersOfPreparation, discountInPercents;

    cin >> pencilsPack >> markersPack >> litersOfPreparation >> discountInPercents;

    double totalPrice = pencilsPack * PACK_OF_PENCILS + markersPack * PACK_OF_MARKERS + litersOfPreparation * PREPARATION_PER_LITER;
    double calculateTotalPriceWithDiscount = totalPrice - (totalPrice * discountInPercents * 0.01);

    cout << calculateTotalPriceWithDiscount << endl;

}
