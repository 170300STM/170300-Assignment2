#include <iostream>
#include <string>

using namespace std;

int main()
{ // iNITIALIZATION SECTION
    string name, course;
    int score, gr;
    char grade;
    // END OF THE SECTION

    // INPUT SECTION
    cout << "Please enter the name of the student: ";
    getline(cin, name);
    cout << "\nEnter the name of the course: ";
    cin >> course;
    cout << "\nEnter the name of the score: ";
    cin >> score;
    // END OF THE SECTION
    // IF-ELSE SECTION
    if (score > 100 || score < 0)
    {
        cout << "invalid Score";
    }
    else if (score >= 70)
    {
        gr = 1;
    }
    else if (score >= 60)
    {
        gr = 2;
    }
    else if (score >= 50)
    {
        gr = 3;
    }
    else if (score >= 40)
    {
        gr = 4;
    }
    else if (score < 40)
    {
        gr = 5;
    }
    else
    {
        cout << "Invalid Score";
    }
    // END OF THE SECTION
    // SWITCH SECTION
    switch (gr)
    {
    case 1:
        cout << "\n"
             << name << " got " << score << " in " << course << " whicH is a \"A\"";
        break;
    case 2:
        cout << "\n"
             << name << " got " << score << " in " << course << " whicH is a \"B\"";
        break;
    case 3:
        cout << "\n"
             << name << " got " << score << " in " << course << " whicH is a \"C\"";
        break;
    case 4:
        cout << "\n"
             << name << " got " << score << " in " << course << " whicH is a \"D\"";
        break;
    case 5:
        cout << "\n"
             << name << " got " << score << " in " << course << " whicH is a \"F\"";
        break;
    default:
        cout << "\nIf not invalid score please refresh page.";
        break;
    }
    // END OF THE SECTION
    return 0;
}