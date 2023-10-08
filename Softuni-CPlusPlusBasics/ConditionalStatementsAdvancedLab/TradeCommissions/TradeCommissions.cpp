#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main()
{
    string city;
    double sales, comission;
    comission = 0;

    cin >> city >> sales;

    if (sales >= 0 && sales <= 500)
    {
        if (city == "Sofia")
        {
            comission = sales * 0.05;
        }
        else if (city == "Varna")
        {
            comission = sales * 0.045;
        }
        else if (city == "Plovdiv")
        {
            comission = sales * 0.055;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if (sales > 500 && sales <= 1000)
    {
        if (city == "Sofia")
        {
            comission = sales * 0.07;
        }
        else if (city == "Varna")
        {
            comission = sales * 0.075;
        }
        else if (city == "Plovdiv")
        {
            comission = sales * 0.08;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if (sales > 1000 && sales <= 10000)
    {
        if (city == "Sofia")
        {
            comission = sales * 0.08;
        }
        else if (city == "Varna")
        {
            comission = sales * 0.1;
        }
        else if (city == "Plovdiv")
        {
            comission = sales * 0.12;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if (sales > 10000)
    {
        if (city == "Sofia")
        {
            comission = sales * 0.12;
        }
        else if (city == "Varna")
        {
            comission = sales * 0.13;
        }
        else if (city == "Plovdiv")
        {
            comission = sales * 0.145;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else
    {
        cout << "error" << endl;
    }
    if (comission > 0)
    {
        cout << fixed << setprecision(2) << comission << endl;
    }
}
