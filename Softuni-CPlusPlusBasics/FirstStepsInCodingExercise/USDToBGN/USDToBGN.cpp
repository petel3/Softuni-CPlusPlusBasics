#include <iostream>

using namespace ::std;


int main()
{
    const double BGN_TO_USD_COURSE = 1.79549;
    double usd;

    cin >> usd;

    double convertToBgn = usd * BGN_TO_USD_COURSE;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << convertToBgn;

}
