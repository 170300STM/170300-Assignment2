#include <iostream>
#include <string>

using namespace std;

const double regular = 12.5;
const double children = 22.5;
const double reference = 32.5;

int main()
{
    // iNITIALIZATION SECTION
    int days, book;
    double cost;
    // END OF THE SECTION

    // INPUT SECTION
    cout << "Please Enter What type of book you returning\n";
    cout << "\tEnter \"1\" if it is a REGULAR book\n";
    cout << "\tEnter \"2\" if it is a CHILDREN book\n";
    cout << "\tEnter \"3\" if it is a REFERENCE book\n";
    cout << "Your Choice: ";
    cin >> book;
    // END OF THE SECTION
    // IF-ELSE SECTION
    if (book == 1)
    {
        cout << "\nKindly provide the number of days the book is overdue for return: ";
        cin >> days;
        cout << "\nYou Owe " << (float)days * regular << "KSH for late return";
    }
    else if (book == 2)
    {
        cout << "\nKindly provide the number of days the book is overdue for return: ";
        cin >> days;
        cout << "\nYou Owe " << (float)days * children << "KSH for late return";
    }
    else if (book == 3)
    {
        cout << "\nKindly provide the number of days the book is overdue for return: ";
        cin >> days;
        cout << "\nYou Owe " << (float)days * reference << "KSH for late return";
    }
    else
    {
        cout << "wrong choice";
    }
    // END OF THE SECTION
    return 0;
}