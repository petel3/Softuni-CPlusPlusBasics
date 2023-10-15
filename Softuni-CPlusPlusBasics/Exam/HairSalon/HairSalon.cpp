#include <iostream>
#include <string>

using namespace std;

int main()
{
    int goal,totalMoney=0;
    cin >> goal;
    string command,typeOfService;

    while (cin>>command&& command!="closed")
    {
        cin >> ws;
        getline(cin, typeOfService);
        if (command=="haircut")
        {
            if (typeOfService=="mens")
            {
                totalMoney += 15;
            }
            else if (typeOfService=="ladies")
            {
                totalMoney += 20;
            }
            else if (typeOfService=="kids")
            {
                totalMoney += 10;
            }
        }
        else if (command=="color")
        {
            if (typeOfService=="touch up")
            {
                totalMoney += 20;
            }
            else if (typeOfService=="full color")
            {
                totalMoney += 30;
            }
        }
        if (goal<=totalMoney)
        {
            break;
        }


        cin >> ws;
    }
    if (goal>totalMoney)
    {
        cout << "Target not reached! You need " << goal - totalMoney << "lv. more." << endl;
    }
    else if (goal<=totalMoney)
    {
        cout << "You have reached your target for the day!" << endl;
    }
    cout << "Earned money: " << totalMoney << "lv." << endl;
}
