#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int bottlesWashGel,dishes,counter=0,countClearDishes=0,countClearPots=0;
    cin >> bottlesWashGel;
    double washGelInMililiters;
    washGelInMililiters = bottlesWashGel * 750;
    string command;
   
    while (cin >> command&&command!="End")
    {
        counter++;
        dishes = stoi(command);
        if (counter%3==0)
        {
            washGelInMililiters -= dishes * 15;
            countClearPots += dishes;
        }
        else 
        {
            washGelInMililiters -= dishes * 5;
            countClearDishes += dishes;
        }
        if (washGelInMililiters < 0)
        {
            cout << "Not enough detergent, " << abs(washGelInMililiters) << " ml. more necessary!" << endl;
            return 0;
        }
    }
    cout << "Detergent was enough!" << endl;
    cout << countClearDishes << " dishes and " << countClearPots << " pots were washed." << endl;
    cout << "Leftover detergent " << washGelInMililiters << " ml." << endl;
}
