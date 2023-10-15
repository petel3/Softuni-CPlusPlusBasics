#include <iostream>

using namespace std;

int main()
{
    double priceOfTShirt, neededMoneyForBall,shortsPrice=0,socksPrice=0,shoesPrice=0,totalPrice=0;
    cin >> priceOfTShirt >> neededMoneyForBall;

    shortsPrice = priceOfTShirt * 0.75;
    socksPrice = shortsPrice * 0.2;
    shoesPrice = (shortsPrice + priceOfTShirt) * 2;

    totalPrice = priceOfTShirt + shortsPrice + socksPrice + shoesPrice;
    totalPrice *= 0.85;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalPrice>=neededMoneyForBall)
    {
        cout << "Yes, he will earn the world-cup replica ball!" << endl;
        cout << "His sum is " << totalPrice << " lv." << endl;
    }else
    {
        cout << "No, he will not earn the world-cup replica ball." << endl;
        cout << "He needs "<<neededMoneyForBall-totalPrice <<" lv. more." << endl;
    }
}
