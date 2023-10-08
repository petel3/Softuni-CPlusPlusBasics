#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    const double PRICE_PER_SQUARE_METER_FOR_NYLON = 1.50;
    const double PAINTING_PRICE_PER_LITER = 14.50;
    const double DILUENT_PRICE_PER_LITER = 5;

    int nylon, paint, diluent, hours;
    cin >> nylon >> paint >> diluent >> hours;

    double nylonPrice = (nylon + 2) * PRICE_PER_SQUARE_METER_FOR_NYLON;
    double paintingPrice = (paint + (paint * 0.1)) * PAINTING_PRICE_PER_LITER;
    double diluentPrice = diluent * DILUENT_PRICE_PER_LITER;
    double totalPrice = nylonPrice + paintingPrice + diluentPrice + 0.4;

    double sumForWorkers = (totalPrice * 0.3) * hours;
    double result = totalPrice + sumForWorkers;

    cout << result << endl;


}
