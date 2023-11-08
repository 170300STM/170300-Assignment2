#include <iostream>
#include <string>

using namespace std;

int main()
{
    // iNITIALIZATION
    int age, bal, dur;
    bool stat;
    // END OF THE SECTION

    // INPUT SECTION
    cout << "Please Enter your age: ";
    cin >> age;
    cout << "\nPlease enter you balance: ";
    cin >> bal;
    cout << "\nPlease enter how month have you been a customer: ";
    cin >> dur;
    cout << "\nPlease enter \"1\" if you have Good CRB status or \"0\" if you have Bad CRB status: ";
    cin >> stat;
    // END OF THE SECTION

    // NESETED IF NAD IF SECTION
    if (age > 22 && bal > 50000)
    {
        if (dur > 6 && stat == 1)
        {
            cout << "\nCutsomer is Qualified for a loan";
        }
        else
        {
            cout << "\nCustomer is NOT Qualified for a loan";
        }
    }
    else
    {
        cout << "\nCustomer is NOT Qualified for a loan";
    }
    // END OF THE SECTION
    return 0;
}