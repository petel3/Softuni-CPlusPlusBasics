#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    double celsius;
    cin >> celsius;

    double convertToFarenheit = 1.8 * celsius + 32;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << convertToFarenheit << endl;
}
