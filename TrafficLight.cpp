#include <iostream>
#include <chrono>
#include <unistd.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

using namespace std;
using namespace std::chrono;
// ENUM SECTION
enum Lights
{
    red,
    green,
    yellow,
    yellow2
};
// END OF THE SECTION
// FUNCTION SECTION
void showlight(Lights color)
{
    switch (color)
    {
    case red:
        cout << RED << "STOP" << endl;
        break;
    case yellow:
        cout << YELLOW << "GET READY TO GO" << endl;
        break;
    case green:
        cout << GREEN << "GO" << endl;
        break;
    case yellow2:
        cout << YELLOW << "GET READY TO STOP" << endl;
        break;
    default:
        cout << RESET << "Invalid Color" << endl;
        break;
    }
}
// END OF THE SECTION
int main()
{
    Lights color = red;
    auto end_time = system_clock::now() + seconds(5);
    while (system_clock::now() < end_time)
    {
        showlight(color);
        sleep(1);
        switch (color)
        {
        case red:
            color = yellow;
            break;
        case yellow:
            color = green;
            break;
        case green:
            color = yellow2;
            break;
        case yellow2:
            color = red;
            break;
        default:
            break;
        }
    }
    return 0;
}