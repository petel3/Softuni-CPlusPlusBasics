#include <iostream>

using namespace std;

int main()
{
    string season, typeGroup,sport;
    int countStudents, nights;
    double totalSum = 0;

    cin >> season >> typeGroup >> countStudents >> nights;

    if (typeGroup=="boys" || typeGroup=="girls")
    {
        if (season=="Winter")
        {
            totalSum = 9.6 * countStudents*nights; 
            if (typeGroup=="boys")
            {
                sport = "Judo";
            }
            else if (typeGroup=="girls")
            {
                sport = "Gymnastics";
            }
        }
        else if (season=="Spring")
        {
            totalSum = 7.2 * countStudents * nights;
            if (typeGroup == "boys")
            {
                sport = "Tennis";
            }
            else if (typeGroup == "girls")
            {
                sport = "Athletics";
            }
        }
        else if (season=="Summer")
        {
            totalSum = 15 * countStudents * nights;
            if (typeGroup == "boys")
            {
                sport = "Football";
            }
            else if (typeGroup == "girls")
            {
                sport = "Volleyball";
            }
        }
    }
    else if (typeGroup=="mixed")
    {
        if (season == "Winter")
        {
            totalSum = 10 * countStudents * nights;
            sport = "Ski";
        }
        else if (season == "Spring")
        {
            totalSum = 9.5 * countStudents * nights;
            sport = "Cycling";
        }
        else if (season == "Summer")
        {
            totalSum = 20 * countStudents * nights;
            sport = "Swimming";
        }
    }
    if (countStudents>=50)
    {
        totalSum = totalSum * 0.5;
    }
    else if (countStudents<50 && countStudents>=20)
    {
        totalSum = totalSum * 0.85;
    }
    else if (countStudents < 20 && countStudents >= 10)
    {
        totalSum = totalSum * 0.95;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sport << " " << totalSum << " lv." << endl;
}
