#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
    double widthInMeters, heightInMeters;
    cin >> widthInMeters >> heightInMeters;

    double widthInCentimeters = widthInMeters * 100;

    double heightInCentimeters = heightInMeters * 100 - 100;


    int placesWidth = widthInCentimeters / 120;

    int plecesHeight = heightInCentimeters / 70;

    int totalPlaces = placesWidth * plecesHeight - 3;

    cout << totalPlaces << endl;
}
