#include <iostream>

using namespace std;

int main()
{

    int n, initialPoints, finalResult = 0, winsCounter = 0;

    cin >> n >> initialPoints;
    finalResult += initialPoints;
    for (int i = 1; i <= n; i++)
    {
        string stage;
        cin >> stage;
        if (stage == "W")
        {
            finalResult += 2000;
            winsCounter += 1;
        }
        else if (stage == "F")
        {
            finalResult += 1200;
        }
        else if (stage == "SF")
        {
            finalResult += 720;
        }
    }
    int averagePoints;
    averagePoints = (finalResult - initialPoints) / n;
    double winsInPercents;
    winsInPercents = 100.0 * winsCounter / n;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Final points: " << finalResult << endl;
    cout << "Average points: " << averagePoints << endl;
    cout << winsInPercents << "%" << endl;
}
