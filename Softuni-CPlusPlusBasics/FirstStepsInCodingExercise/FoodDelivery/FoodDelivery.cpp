#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const double CHICKEN_MENU = 10.35;
    const double FISH_MENU = 12.40;
    const double VEGETARIAN_MENU = 8.15;
    const double DELIVERY_PRICE = 2.50;

    int countChickenMenus, countFishMenus, countVegetarianMenus;

    cin >> countChickenMenus >> countFishMenus >> countVegetarianMenus;

    double chickenPrice = countChickenMenus * CHICKEN_MENU;
    double fishPrice = countFishMenus * FISH_MENU;
    double vegetarianPrice = countVegetarianMenus * VEGETARIAN_MENU;

    double desertPrice = (chickenPrice + fishPrice + vegetarianPrice) * 0.2;
    double total = chickenPrice + fishPrice + vegetarianPrice + desertPrice + DELIVERY_PRICE;

    cout << total << endl;

}
