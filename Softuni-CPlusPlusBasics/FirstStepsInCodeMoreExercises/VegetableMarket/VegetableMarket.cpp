#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double vegetaPricePerKilo, fruitsPricePerKilo;
    int kilosOfVegetables, kilosOfFruits;

    cin >> vegetaPricePerKilo >> fruitsPricePerKilo >> kilosOfVegetables >> kilosOfFruits;

    double productsPriseInEuro = (vegetaPricePerKilo * kilosOfVegetables + fruitsPricePerKilo * kilosOfFruits) / 1.94;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << productsPriseInEuro;
}
