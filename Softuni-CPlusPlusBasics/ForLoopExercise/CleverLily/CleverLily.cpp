#include <iostream>

using namespace std;

int main()
{
    int age, pricePerToy, moneyPerEvenBirthday = 10;
    double washingMachinePrice, totalMoney = 0;
    cin >> age >> washingMachinePrice >> pricePerToy;
    for (int i = 1; i <= age; i++)
    {

        if (i % 2 == 0 && age > 1)
        {
            totalMoney += moneyPerEvenBirthday - 1;
            moneyPerEvenBirthday += 10;
        }
        else
        {
            totalMoney += pricePerToy;
        }

    }
    cout.setf(ios::fixed);
    cout.precision(2);
    if (totalMoney >= washingMachinePrice)
    {
        cout << "Yes! " << totalMoney - washingMachinePrice << endl;
    }
    else if (totalMoney < washingMachinePrice)
    {
        cout << "No! " << abs(totalMoney - washingMachinePrice) << endl;
    }
}
