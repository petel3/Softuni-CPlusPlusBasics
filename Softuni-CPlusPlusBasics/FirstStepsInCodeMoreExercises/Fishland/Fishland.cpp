#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
	const double MUSSELS_PRICE = 7.5;

	double mackerelPriceForKilo, sprinklePriceForKilo, bonitoKilos, scadKilos, musselsKilos;
	cin >> mackerelPriceForKilo >> sprinklePriceForKilo >> bonitoKilos >> scadKilos >> musselsKilos;

	double bonitoPricePerKilo = mackerelPriceForKilo * 1.6;
	double scadPricePerKilo = sprinklePriceForKilo * 1.8;

	double totalPrice = bonitoKilos * bonitoPricePerKilo + scadKilos * scadPricePerKilo + musselsKilos * MUSSELS_PRICE;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << totalPrice;
}
