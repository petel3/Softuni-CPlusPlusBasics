#include <iostream>
#include <string>

using namespace std;

int main()
{
    string movie;
    int days, tickets, percentForCinema;
    double pricePerTicket,totalSum=0;
    getline(cin, movie);
    cin >> days >> tickets >> pricePerTicket >> percentForCinema;

    totalSum = tickets * pricePerTicket * days -(tickets * pricePerTicket*days *(percentForCinema/100.0));

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The profit from the movie "<<movie<<" is " << totalSum << " lv." << endl;
}
