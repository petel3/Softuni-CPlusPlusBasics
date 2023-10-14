#include <iostream>
#include <string>

using namespace std;

int main()
{
    double budget,totalPrice=0;
    int buyCounter = 0;
    cin >> budget;
    string product;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    cin >> ws;
    while (getline(cin,product) && product!="Stop")
    {
        double price;
        cin >> price;
       
        buyCounter++;

        if (buyCounter%3==0)
        {
            price=price/2;
        }

        if (totalPrice+price>budget)
        {
            cout << "You don't have enough money!" << endl;
            cout << "You need " << (totalPrice + price)-budget << " leva!" << endl;
            return 0;
        }
        else
        {  
            totalPrice += price;
        }

        cin >> ws; 
    }
   cout << "You bought " << buyCounter << " products for " << totalPrice << " leva." << endl;
}
