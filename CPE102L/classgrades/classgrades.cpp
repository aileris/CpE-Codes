#include <iostream>

using namespace std;

int main()
{
    int studentID;
    string studentName;
    double GPA;
    int QUIT = 999;

    cout << "Enter Student ID Number: ";
    cin >> studentID;
    cout << "Enter Student Name: ";
    cin >> studentName;
    cout << "Enter GPA: ";
    cin >> GPA;

    while(studentID != QUIT)
    {
        cout << studentID << ", " << studentName << ", " << GPA << endl;
        cout << "Enter another Student ID Number or " << QUIT << " to quit: ";
        cin >> studentID;
        if(studentID != QUIT)
        {
            cout << "Enter Student Name: ";
            cin >> studentName;
            cout << "Enter GPA: ";
            cin >> GPA;
        }
    }

    cout << "Class Grades Terminated.";
    return 0;
}