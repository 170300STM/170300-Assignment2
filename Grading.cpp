#include <iostream>
#include <string>

using namespace std;

int main()
{
     // iNITIALIZATION SECTION
     string name, course;
     int score;
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
          cout << "Invalid Score";
     }
     else if (score >= 70)
     {
          cout << "\n"
               << name << " got " << score << " in " << course << " whicH is a \"A\"";
     }
     else if (score >= 60)
     {
          cout << "\n"
               << name << " got " << score << " in " << course << " whicH is a \"B\"";
     }
     else if (score >= 50)
     {
          cout << "\n"
               << name << " got " << score << " in " << course << " whicH is a \"C\"";
     }
     else if (score >= 40)
     {
          cout << "\n"
               << name << " got " << score << " in " << course << " whicH is a \"D\"";
     }
     else if (score < 40)
     {
          cout << "\n"
               << name << " got " << score << " in " << course << " whicH is a \"F\"";
     }
     else
     {
          cout << "Invalid Score";
     }

     // END OF THE SECTION
     return 0;
}