#include <iostream>

using namespace std;

int main()
{
    
    string country, instrument;
    double difficulty = 0, performance = 0;

    cin >> country >> instrument;

    if (country=="Russia")
    {
        if (instrument=="ribbon")
        {
            difficulty = 9.1;
            performance = 9.4;
        }
        else if (instrument=="hoop")
        {
            difficulty = 9.3;
            performance = 9.8;
        }
        else if (instrument=="rope")
        {
            difficulty = 9.6;
            performance = 9;
        }
    }
    else if (country=="Bulgaria")
    {
        if (instrument == "ribbon")
        {
            difficulty = 9.6;
            performance = 9.4;
        }
        else if (instrument == "hoop")
        {
            difficulty = 9.55;
            performance = 9.75;
        }
        else if (instrument == "rope")
        {
            difficulty = 9.5;
            performance = 9.4;
        }
    }
    else if (country=="Italy")
    {
        if (instrument == "ribbon")
        {
            difficulty = 9.2;
            performance = 9.5;
        }
        else if (instrument == "hoop")
        {
            difficulty = 9.45;
            performance = 9.35;
        }
        else if (instrument == "rope")
        {
            difficulty = 9.7;
            performance = 9.15;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(3);

    cout << "The team of " << country << " get " << difficulty + performance << " on " << instrument << "." << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout <<  100-((difficulty + performance) / 20*100) <<"%" << endl;
}
