#include <iostream>
#include <string>

using namespace std;

const double reg = 300;
const double spec = 500;
int main()
{ // iNITIALIZATION SECTION
    int age, typ;
    double tp;
    // END OF THE SECTION

    // INPUT SECTION
    cout << "How old are you: ";
    cin >> age;

    cout << "\nWhat type of movie are you gonna watch\n";
    cout << "If it is the regular movie put in \"1\"\n";
    cout << "If it is the 3D movie put in \"2\"\n";
    cout << "\nwhats your choice: ";
    cin >> typ;
    // END OF THE SECTION
    // IF-ELSE SECTION
    if (age >= 24)
    {
        if (typ == 1)
        {
            tp = 3 * reg;
            cout << "\nYour price for you ticket is: " << tp << " KSH";
        }
        else if (typ == 2)
        {
            tp = 3 * spec;
            cout << "\nYour price for you ticket is: " << tp << " KSH";
        }
        else
        {
        }
    }
    else if (age >= 18)
    {
        if (typ == 1)
        {
            tp = 2 * reg;
            cout << "\nYour price for you ticket is: " << tp << " KSH";
        }
        else if (typ == 2)
        {
            tp = 2 * spec;
            cout << "\nYour price for you ticket is: " << tp << " KSH";
        }
        else
        {
        }
    }
    else if (age >= 5)
    {

        if (typ == 1)
        {
            tp = 1.5 * reg;
            cout << "\nYour price for you ticket is: " << tp << " KSH";
        }
        else if (typ == 2)
        {
            tp = 1.5 * spec;
            cout << "\nYour price for you ticket is: " << tp << " KSH";
        }
        else
        {
        }
    }
    else
    {
    }
    // END OF THE SECTION
    return 0;
}