#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
    int n, maxNum, sum = 0;
    cin >> n;
    maxNum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int number;
        cin >> number;
        sum += number;
        if (maxNum < number)
        {
            maxNum = number;
        }
    }
    if (sum - maxNum == maxNum)
    {
        cout << "Yes" << endl;
        cout << "Sum = " << maxNum;
    }
    else
    {
        cout << "No" << endl;
        cout << "Diff = " << abs((sum - maxNum) - maxNum) << endl;

    }
}
