#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double PI = 3.14;

    double radians;

    cin >> radians;

    double radiansToDegrees = round(radians * 180 / PI);

    cout << radiansToDegrees;
}

