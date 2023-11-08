#include <iostream>
#include <string>

using namespace std;
const float pi = 3.14159;

int main()
{
    // iNITIALIZATION SECTION
    int num;
    double area;
    // END OF THE SECTION

    // INPUT SECTION
    cout << "\n\nREAD AND SELECT FROM THE MENU BELOW\n\n";
    cout << "enter \"1\" if you want to Calculate the area of a circle\n";
    cout << "enter \"2\" if you want to Calculate the area of a rectangle\n";
    cout << "enter \"3\" if you want to Calculate the area of a triangle \n";
    cout << "enter \"4\" if you want to Quit\n";
    cout << "\n\nEnter your choice:";
    cin >> num;
    // END OF THE SECTION
    // SWITCH SECTION
    switch (num)
    {
    case 1:
        double r;
        cout << "\nEnter the radius: ";
        cin >> r;
        area = pi * (r * r);
        cout << "\n The area is: "
             << area << endl;
        break;
    case 2:
        double l, w;
        cout << "\nEnter the  legnth";
        cin >> l;
        cout << "\nEnter the  width";
        cin >> w;
        area = l * w;
        cout << "\n The area is: "
             << area << endl;
        break;
    case 3:
        double h, b;
        cout << "\nEnter the  hieght: ";
        cin >> h;
        cout << "\nEnter the  base: ";
        cin >> b;
        area = 0.5 * (h * b);
        cout << "\n The area is: "
             << area << endl;
        break;
    case 4:
        cout << "\nYou have quit have a good day";
        break;

    default:
        break;
    }
    // END OF THE SECTION
    return 0;
}