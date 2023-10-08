#include <iostream>

using std::cin;
using std::cout;


int main()
{
    const double DOG_FOOD_PRICE = 2.50;
    const double CAT_FOOD_PRICE = 4.00;

    int dogFood, catFood;

    cin >> dogFood;
    cin >> catFood;

    double dogFoodResult = dogFood * DOG_FOOD_PRICE;
    double catFoodResult = catFood * CAT_FOOD_PRICE;

    double sumOfPetsFood = dogFoodResult + catFoodResult;

    cout << sumOfPetsFood << " lv.";
}

