#include <iostream>
#include <string>

using namespace std;

int main()
{
    string neededBook, booksInTheLibrary;
    int booksCounter = 0;
    getline(cin, neededBook);
    getline(cin, booksInTheLibrary);

    bool isFounded = false;
    while (booksInTheLibrary != "No More Books")
    {

        if (booksInTheLibrary == neededBook)
        {
            cout << "You checked " << booksCounter << " books and found it." << endl;
            isFounded = true;
            break;
        }
        booksCounter++;
        getline(cin, booksInTheLibrary);
    }
    if (!isFounded)
    {
        cout << "The book you search is not here!" << endl;
        cout << "You checked " << booksCounter << " books." << endl;
    }

}
