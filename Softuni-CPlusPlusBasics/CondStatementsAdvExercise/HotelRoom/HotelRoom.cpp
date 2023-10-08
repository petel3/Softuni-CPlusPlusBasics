#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::ios;

int main()
{
    string month;
    int days;
    double priceStudio, priceApartment;
    cin >> month >> days;

    if (month == "May" || month == "October")
    {
        priceStudio = days * 50;
        priceApartment = days * 65;
        if (days > 7 && days <= 14)
        {
            priceStudio = priceStudio - priceStudio * 0.05;
        }
        else if (days > 14)
        {
            priceStudio = priceStudio - priceStudio * 0.3;
        }
    }
    else if (month == "June" || month == "September")
    {
        priceStudio = days * 75.2;
        priceApartment = days * 68.7;
        if (days > 14)
        {
            priceStudio = priceStudio - priceStudio * 0.2;
        }
    }
    else if (month == "July" || month == "August")
    {
        priceStudio = days * 76;
        priceApartment = days * 77;
    }
    if (days > 14)
    {
        priceApartment = priceApartment - priceApartment * 0.1;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Apartment: " << priceApartment << " lv." << endl;
    cout << "Studio: " << priceStudio << " lv." << endl;

}