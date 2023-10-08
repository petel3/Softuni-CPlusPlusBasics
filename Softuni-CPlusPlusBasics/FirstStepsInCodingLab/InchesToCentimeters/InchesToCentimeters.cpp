#include <iostream>

using std::cin;
using std::cout;

int main()
{
    const double ONE_INCH_TO_CENTIMETER = 2.54;
    double inches;

    cin >> inches;

    double inchesToCentemeters = inches * ONE_INCH_TO_CENTIMETER;

    cout << inchesToCentemeters;

}