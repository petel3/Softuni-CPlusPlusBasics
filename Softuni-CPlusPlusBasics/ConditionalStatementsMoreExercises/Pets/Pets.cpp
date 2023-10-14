#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    int days, leftFoodInKilosByOwner;
    double foodForDogInKilos, foodForCatInKilos, foodForTurtleInGrams;
    cin >> days >> leftFoodInKilosByOwner >> foodForDogInKilos >> foodForCatInKilos >> foodForTurtleInGrams;

    double totalFoodForPetsInKilos = foodForDogInKilos * days + foodForCatInKilos * days + (foodForTurtleInGrams / 1000) * days;


    if (leftFoodInKilosByOwner >= totalFoodForPetsInKilos)
    {
        double leftFood = leftFoodInKilosByOwner - totalFoodForPetsInKilos;
        cout << floor(leftFood) << " kilos of food left." << endl;
    }
    else
    {
        double neededFood = totalFoodForPetsInKilos - leftFoodInKilosByOwner;

        cout << ceil(neededFood) << " more kilos of food are needed." << endl;
    }
}
