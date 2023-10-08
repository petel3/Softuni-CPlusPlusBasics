#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const double PRICE_PER_SQUARE = 7.61;

    double squares;

    cin >> squares;

    double totalPrice = squares * PRICE_PER_SQUARE;
    double discount = totalPrice * 0.18;
    double result = totalPrice - discount;

    cout << "The final price is: " << result << " lv." << endl;
    cout << "The discount is:" << discount << " lv." << endl;


}