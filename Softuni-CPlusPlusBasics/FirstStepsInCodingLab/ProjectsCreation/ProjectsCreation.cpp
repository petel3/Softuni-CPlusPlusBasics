#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    const int PROJECT_TIME = 3;

    string architect;
    int projects;

    cin >> architect;
    cin >> projects;

    int countProjectsHours;
    countProjectsHours = projects * PROJECT_TIME;

    cout << "The architect " << architect << " will need " << countProjectsHours << " hours to complete " << projects << " project/s." << endl;

}