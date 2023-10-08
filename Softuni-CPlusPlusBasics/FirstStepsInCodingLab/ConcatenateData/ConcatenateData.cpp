#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string firstName, lastName, town;
    int age;
    cin >> firstName;
    cin >> lastName;
    cin >> age;
    cin >> town;
    cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << '.';
}
