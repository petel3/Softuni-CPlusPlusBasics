#include <iostream>

using namespace std;

int main()
{
    double priceOfBagsOver20Kilos, weightOfBaggage,totalPrice=0;
    int daysOfTravel, countBaggage;

    cin >> priceOfBagsOver20Kilos >> weightOfBaggage >> daysOfTravel >> countBaggage;

    if (weightOfBaggage>20)
    {
        totalPrice = priceOfBagsOver20Kilos;
    }
    else if (weightOfBaggage<10)
    {
        totalPrice = priceOfBagsOver20Kilos * 0.2;
    }
    else if (weightOfBaggage>=10 && weightOfBaggage<=20)
    {
        totalPrice = priceOfBagsOver20Kilos / 2;
    }
    if (daysOfTravel>30)
    {
        totalPrice+= totalPrice * 0.1;
    }
    else if (daysOfTravel<=30 && daysOfTravel>=7)
    {
        totalPrice+= totalPrice * 0.15;
    }
    else if (daysOfTravel<7)
    {
        totalPrice+=totalPrice * 0.4;
    }
  
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The total price of bags is: " << totalPrice * countBaggage << " lv." << endl;
}
