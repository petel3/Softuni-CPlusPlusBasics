#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;


int main()
{
    int x, z;
    double y, workers;

    cin >> x >> y >> z >> workers;

    double totalGrape = x * y;
    double totalWine = 0.4 * totalGrape / 2.5;
    if (totalWine >= z)
    {
        double wineForWorkers = totalWine - z;
        double winePerWorker = wineForWorkers / workers;

        cout << "Good harvest this year! Total wine: " << floor(totalWine) << " liters." << endl;
        cout << ceil(wineForWorkers) << " liters left -> " << ceil(winePerWorker) << " liters per person." << endl;
    }
    else
    {
        double neededWine = z - totalWine;
        cout << "It will be a tough winter! More " << floor(neededWine) << " liters wine needed." << endl;
    }
}
