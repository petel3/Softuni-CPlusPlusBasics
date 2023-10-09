#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n, maxNumber, minNumber;
    maxNumber = INT_MIN;
    minNumber = INT_MAX;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int number;
        cin >> number;
        if (maxNumber < number)
        {
            maxNumber = number;
        }
        if (minNumber > number)
        {
            minNumber = number;
        }
    }
    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;
}


