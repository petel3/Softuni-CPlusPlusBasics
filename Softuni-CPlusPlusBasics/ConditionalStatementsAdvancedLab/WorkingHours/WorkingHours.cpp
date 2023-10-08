#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int hours;
    string dayOfWeek;

    cin >> hours >> dayOfWeek;

    if (hours >= 10 && hours <= 18 && (dayOfWeek == "Monday" || dayOfWeek == "Tuesday"
        || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday"
        || dayOfWeek == "Friday" || dayOfWeek == "Saturday"))
    {
        cout << "open" << endl;
    }
    else
    {
        cout << "closed" << endl;
    }
}
