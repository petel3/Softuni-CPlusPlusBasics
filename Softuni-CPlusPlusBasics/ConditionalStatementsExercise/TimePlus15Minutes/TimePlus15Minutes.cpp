#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int hours, minutes;
    cin >> hours >> minutes;

    int timeInMinutes = hours * 60 + minutes;
    int addMins = timeInMinutes + 15;

    int finalHours = addMins / 60;
    int finalMinutes = addMins % 60;
    if (finalHours >= 24)
    {
        finalHours -= 24;
    }
    if (finalMinutes < 10)
    {
        cout << finalHours << ":0" << finalMinutes << endl;
    }
    else
    {
        cout << finalHours << ":" << finalMinutes << endl;
    }
}
