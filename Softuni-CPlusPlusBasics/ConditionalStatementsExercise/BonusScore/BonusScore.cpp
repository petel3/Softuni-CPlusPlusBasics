#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int initialPoints;
    cin >> initialPoints;

    double bonusPoints = 0;


    if (initialPoints <= 100)
    {
        bonusPoints += 5;
    }
    else if (initialPoints > 100 && initialPoints <= 1000)
    {
        bonusPoints += initialPoints * 0.2;
    }
    else if (initialPoints > 1000)
    {
        bonusPoints += initialPoints * 0.1;
    }

    if (initialPoints % 2 == 0)
    {
        bonusPoints += 1;
    }
    else if (initialPoints % 5 == 0)
    {
        bonusPoints += 2;
    }

    cout << bonusPoints << endl;
    cout << bonusPoints + initialPoints << endl;
}