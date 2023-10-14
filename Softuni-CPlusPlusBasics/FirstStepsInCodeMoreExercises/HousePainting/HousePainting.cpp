#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double x, y, h;
    cin >> x >> y >> h;
    //walls
    double sidePerimeter = x * y;
    double window = 1.5 * 1.5;
    double allSidesPerimeter = 2 * sidePerimeter - 2 * window;
    double backSide = x * x;
    double enterance = 1.2 * 2;
    double backAndFrontSide = 2 * backSide - enterance;
    double perimeterForGreenPaint = allSidesPerimeter + backAndFrontSide;
    double litersForGreenPaint = perimeterForGreenPaint / 3.4;
    //roof
    double rectanglesOnTheFloor = 2 * (x * y);
    double trianglesOnTheFloor = 2 * (x * h / 2);
    double perimeterForRedPaint = rectanglesOnTheFloor + trianglesOnTheFloor;
    double litersForRedPaint = perimeterForRedPaint / 4.3;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << litersForGreenPaint << endl;
    cout << litersForRedPaint << endl;


}
