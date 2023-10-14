#include <iostream>

using std::cin;
using std::cout;
using std::ios;
using std::string;
using std::endl;

int main()
{
    const double DIESEL_PRICE = 2.33;
    const double GAS_PRICE = 0.93;
    const double GASOLINE_PRICE = 2.22;

    string fuel, clubCard;
    double quantityOfFuel;
    cin >> fuel >> quantityOfFuel >> clubCard;

    double fuelPrice;

    if (fuel == "Gas" && quantityOfFuel <= 25 && quantityOfFuel >= 20)
    {
        fuelPrice = quantityOfFuel * GAS_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.08);
        }
        fuelPrice -= fuelPrice * 0.08;
    }
    else if (fuel == "Gas" && quantityOfFuel > 25)
    {
        fuelPrice = quantityOfFuel * GAS_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.08);
        }
        fuelPrice -= fuelPrice * 0.1;
    }
    else if (fuel == "Gas" && quantityOfFuel < 20)
    {
        fuelPrice = quantityOfFuel * GAS_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.08);
        }
    }
    else if (fuel == "Diesel" && quantityOfFuel <= 25 && quantityOfFuel >= 20)
    {
        fuelPrice = quantityOfFuel * DIESEL_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.12);
        }
        fuelPrice -= fuelPrice * 0.08;
    }
    else if (fuel == "Diesel" && quantityOfFuel > 25)
    {
        fuelPrice = quantityOfFuel * DIESEL_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.12);
        }
        fuelPrice -= fuelPrice * 0.1;
    }
    else if (fuel == "Diesel" && quantityOfFuel < 20)
    {
        fuelPrice = quantityOfFuel * DIESEL_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.12);
        }
    }
    else if (fuel == "Gasoline" && quantityOfFuel <= 25 && quantityOfFuel >= 20)
    {
        fuelPrice = quantityOfFuel * GASOLINE_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.18);
        }
        fuelPrice -= fuelPrice * 0.08;
    }
    else if (fuel == "Gasoline" && quantityOfFuel > 25)
    {
        fuelPrice = quantityOfFuel * GASOLINE_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.18);
        }
        fuelPrice -= fuelPrice * 0.1;
    }
    else if (fuel == "Gasoline" && quantityOfFuel < 20)
    {
        fuelPrice = quantityOfFuel * GASOLINE_PRICE;
        if (clubCard == "Yes")
        {
            fuelPrice = fuelPrice - (quantityOfFuel * 0.18);
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << fuelPrice << " lv." << endl;
}
