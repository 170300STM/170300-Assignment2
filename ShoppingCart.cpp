#include <iostream>
#include <string>

using namespace std;

int main()
{ // iNITIALIZATION SECTION
    double cart, total, new_total;
    // END OF THE SECTION

    // INPUT SECTION
    cout << "Please enter the total amount: ";
    cin >> total;
    // END OF THE SECTION
    // IF-ELSE SECTION
    if (total >= 60000)
    {
        cart = (0.3 * total);
        new_total = total - cart;
        cout << "\nA discount of 30 percentage was applied\n";
        cout << "\nYour  new Total is " << new_total;
    }
    else if (total >= 40000)
    {
        cart = (0.25 * total);
        new_total = total - cart;
        cout << "\nA discount of 25 percentage was applied\n";
        cout << "\nYour  new Total is " << new_total;
    }
    else if (total >= 20000)
    {
        cart = (0.2 * total);
        new_total = total - cart;
        cout << "\nA discount of 20 percentage was applied\n";
        cout << "\nYour  new Total is " << new_total;
    }
    else if (total >= 10000)
    {
        cart = (0.15 * total);
        new_total = total - cart;
        cout << "\nA discount of 15 percentage was applied\n";
        cout << "\nYour  new Total is " << new_total;
    }
    else
    {
        cout << "There is no discount applied\n";
        cout << "Your Total is " << total;
    }
    // END OF THE SECTION
    return 0;
}