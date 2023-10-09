#include <iostream>
#include <string>

using namespace std;

int main()
{
    string initialActor, inputPoints, inputNumber;
    double totalPoints = 0;

    getline(cin, initialActor);

    getline(cin, inputPoints);
    double initialPoints = stod(inputPoints);

    getline(cin, inputNumber);
    double n = stoi(inputNumber);

    totalPoints += initialPoints;

    cout.setf(ios::fixed);
    cout.precision(1);

    for (int i = 1; i <= n; i++)
    {
        string actor, numberOfPoints;

        getline(cin, actor);
        getline(cin, numberOfPoints);
        double points = stod(numberOfPoints);

        totalPoints = totalPoints + (actor.length() * points / 2);

        if (totalPoints > 1250.5)
        {
            cout << "Congratulations, " << initialActor << " got a nominee for leading role with " << totalPoints << "!" << endl;
            break;
        }

    }
    if (totalPoints < 1250.5)
    {
        cout << "Sorry, " << initialActor << " you need " << 1250.5 - totalPoints << " more!" << endl;
    }

}
