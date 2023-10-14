#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double budget, pricePerNight,totalMoney,afterAdditionalExpenses=0;
    int nights, percentAdditionalExpenses;

        cin >> budget >> nights >> pricePerNight >> percentAdditionalExpenses;

    if (nights>7)
    {
        pricePerNight *= 0.95;
    }

    afterAdditionalExpenses = budget * (percentAdditionalExpenses/100.0);
    totalMoney = nights * pricePerNight;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget- afterAdditionalExpenses >=totalMoney)
    {
        cout << "Ivanovi will be left with " <<budget-afterAdditionalExpenses-totalMoney << " leva after vacation." << endl;
    }
    else if(budget<totalMoney+ afterAdditionalExpenses)
    {
        cout <<totalMoney+ afterAdditionalExpenses-budget << " leva needed." << endl;
    }
}
