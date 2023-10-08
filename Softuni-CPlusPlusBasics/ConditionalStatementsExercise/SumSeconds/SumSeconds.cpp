#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int timeFirst, timeSecond, timeThird;
    cin >> timeFirst >> timeSecond >> timeThird;

    int totalTIme = timeFirst + timeSecond + timeThird;

    int minutes = totalTIme / 60;
    int seconds = totalTIme % 60;

    if (seconds < 10)
    {
        cout << minutes << ":0" << seconds << endl;
    }
    else
    {
        cout << minutes << ":" << seconds << endl;
    }
}