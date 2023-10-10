#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string input;
    int length, width, pieces, neededPieces = 0;
    cin >> length >> width;
    pieces = length * width;


    while (cin >> input && input != "STOP")
    {
        int orderedPieces = stoi(input);
        pieces -= orderedPieces;
        if (pieces <= 0)
        {
            neededPieces = abs(pieces);
            cout << "No more cake left! You need " << neededPieces << " pieces more." << endl;
            break;
        }

    }
    if (pieces > 0)
    {
        cout << pieces << " pieces are left." << endl;
    }


}
