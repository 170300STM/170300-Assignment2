#include <iostream>
#include <string>

using namespace std;

const int limit = 500000;
const double bal = 700000;
int main()
{
    // iNITIALIZATION SECTION
    string name;
    double amount;
    // END OF THE SECTION

    // INPUT SECTION
    cout << "Hello Welcome to our Withdraw Menu\n";
    cout << "\nWho am i assisting today: ";
    getline(cin, name);

    cout << "\n\nHow much do you wanna withdraw today Mr/Mrs/Ms." << name << " KSH: ";
    cin >> amount;
    // END OF THE SECTION
    // IF-ELSE SECTION
    if (amount < bal)
    {
        if (amount <= limit)
        {
            cout << "\n\nYou have succesfully withdrawn " << amount << " KSH";
            cout << "\n\nHappy to Assist You";
        }
        else
        {
            cout << "\n\nYou were not able to withdraw due exceeding daily limits";
            cout << "\n\nIts been a pleasure to assit you";
        }
    }
    else
    {
        cout << "\n\nYou were not able to withdraw due to insufficient funds";
        cout << "\n\nIts been a pleasure to assit you";
    }
    // END OF THE SECTION
    return 0;
}