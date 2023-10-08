#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string serial;
    int lengthOfEpisode, lengthOfBreak;
    getline(cin, serial);
    cin >> lengthOfEpisode >> lengthOfBreak;

    double timeForLunch = lengthOfBreak * 0.125;
    double timeForRest = lengthOfBreak * 0.25;

    double freeTimeForSerial = lengthOfBreak - timeForLunch - timeForRest;

    if (lengthOfEpisode <= freeTimeForSerial)
    {
        double additionalTime = freeTimeForSerial - lengthOfEpisode;

        cout << "You have enough time to watch " << serial << " and left with " <<
            ceil(additionalTime) << " minutes free time." << endl;
    }
    else
    {
        double additionalTime = lengthOfEpisode - freeTimeForSerial;

        cout << "You don't have enough time to watch " << serial
            << ", you need " << ceil(additionalTime) << " more minutes." << endl;
    }
}
