#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int annualTax;
    cin >> annualTax;

    double basketballSneakers = annualTax - annualTax * 0.4;
    double basketballOutfit = basketballSneakers - basketballSneakers * 0.2;
    double ball = 0.25 * basketballOutfit;
    double accessories = 0.2 * ball;

    double result = annualTax + basketballSneakers + basketballOutfit + ball + accessories;

    cout << result << endl;
}
