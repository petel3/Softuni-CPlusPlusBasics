#include <iostream>

using namespace std;

int main()
{
    double weight,totalCost=0,expressAdditionalCost =0;
    string typeService;
    int distanceInKm;

    cin >> weight >> typeService >> distanceInKm;

    if (weight<1)
    {
        if (typeService=="standard")
        {
            totalCost = distanceInKm * 0.03;
        }
        else if (typeService=="express")
        {
            expressAdditionalCost = (0.03 * 0.8)* weight * distanceInKm;
            totalCost = distanceInKm*0.03 + expressAdditionalCost;
        } 
    }
    else if (weight>=1 && weight<10)
    {
        if (typeService == "standard")
        {
            totalCost = distanceInKm * 0.05;
        }
        else if (typeService == "express")
        {
            expressAdditionalCost = (0.05 * 0.4) * weight * distanceInKm;
            totalCost = distanceInKm *0.05+ expressAdditionalCost;
        }
    }
    else if (weight>=10 && weight<40)
    {
        if (typeService == "standard")
        {
            totalCost = distanceInKm * 0.1;
        }
        else if (typeService == "express")
        {
            expressAdditionalCost = (0.1 * 0.05) * weight * distanceInKm;
            totalCost = distanceInKm*0.1 + expressAdditionalCost;
        }
    }
    else if (weight>=40 && weight<90)
    {
        if (typeService == "standard")
        {
            totalCost = distanceInKm * 0.15;
        }
        else if (typeService == "express")
        {
            expressAdditionalCost = (0.15 * 0.02) *weight* distanceInKm;
            totalCost = distanceInKm*0.15 + expressAdditionalCost;
        }
    }
    else if (weight>=90 && weight<150)
    {
        if (typeService == "standard")
        {
            totalCost = distanceInKm * 0.2;
        }
        else if (typeService == "express")
        {
            expressAdditionalCost = (0.2 * 0.01) * weight * distanceInKm;
            totalCost = distanceInKm*0.2 + expressAdditionalCost;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << "The delivery of your shipment with weight of " << weight<<" kg.";

    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<" would cost " << totalCost << " lv." << endl;
}
