#include <iostream>
#include <string>

using namespace std;

int main()
{// iNITIALIZATION SECTION
    int num1, num2, num3;
     // END OF THE SECTION

    // INPUT SECTION
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "\nEnter the second number: ";
    cin >> num2;
     // END OF THE SECTION
    // IF-ELSE SECTION
    if (num1 > num2)
    {
        num3 = 1;
    }
    else if (num1 < num2)
    {
        num3 = 2;
    }
    else
    {
        cout << "\nThey are equal";
    }
  // END OF THE SECTION
    // SWITCH SECTION
    switch (num3)
    {
    case 1:
        cout << "\nThe first number is greater then the other";
        break;
    case 2:
        cout << "\nThe second number is greater then the other";
        break;
    default:
        break;
    }
    // END OF THE SECTION
    return 0;
}