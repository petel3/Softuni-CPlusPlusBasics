#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int countPages, pagesPerHour, countDays;

    cin >> countPages >> pagesPerHour >> countDays;

    int totalTimePerBookReading = countPages / pagesPerHour;
    int hoursPerDay = totalTimePerBookReading / countDays;

    cout << hoursPerDay;
}
