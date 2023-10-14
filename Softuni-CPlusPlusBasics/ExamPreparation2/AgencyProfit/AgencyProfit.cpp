#include <iostream>
#include <string>

using namespace std;

int main()
{
    string agency;
    int adultTickets, childrenTickets;
    double adultTicketPrice, servicePrice, childrenTicketPrice=0,totalPrice=0;

    getline(cin, agency);
    cin >> ws;
    cin >>  adultTickets >> childrenTickets >> adultTicketPrice >> servicePrice;

    childrenTicketPrice = (adultTicketPrice * 0.3) + servicePrice;
    adultTicketPrice += servicePrice;

    totalPrice = (adultTicketPrice * adultTickets) + (childrenTicketPrice * childrenTickets);
    totalPrice *= 0.2;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The profit of your agency from " << agency << " tickets is " << totalPrice << " lv." << endl;
}
