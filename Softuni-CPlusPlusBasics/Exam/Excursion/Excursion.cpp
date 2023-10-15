#include <iostream>

using namespace std;

int main()
{
    
    int peopleCountInTheGroup, nights, transportCards, tickets;
    double totalSum = 0, sumPerOnePerson = 0,transport=0;
    cin >> peopleCountInTheGroup >> nights >> transportCards >> tickets;

    nights = nights * 20;
    transport = transportCards * 1.6;
    tickets = tickets * 6;
    sumPerOnePerson = nights + transport + tickets;
    totalSum = (sumPerOnePerson * peopleCountInTheGroup) * 1.25;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalSum;
}
