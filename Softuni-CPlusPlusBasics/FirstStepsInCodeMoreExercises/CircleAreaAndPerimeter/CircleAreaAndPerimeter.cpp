#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double radius;
    cin >> radius;

    double circleArea = M_PI * pow(radius, 2);
    double circlePerimeter = 2 * M_PI * radius;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << circleArea << endl;
    cout << circlePerimeter << endl;
}