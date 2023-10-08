#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int lenght, width, heigh;
    double percentOfOccupiedSpace;

    cin >> lenght >> width >> heigh >> percentOfOccupiedSpace;

    double volumeOfAquariumInCubicCentimeters = lenght * width * heigh;
    double volumeInLiters = volumeOfAquariumInCubicCentimeters * 0.001;
    double result = volumeInLiters * (1 - percentOfOccupiedSpace * 0.01);

    cout << result << endl;
}
