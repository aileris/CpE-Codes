#include <iostream>//De Guzman, Johann Daniel C.
// 2021104898; CPE103L / A7
using namespace std;

class Student
{
private:
    int studentNumber;
    string studentName;
    int grade;
    int status;
public:
    void studentAttributes()
    {
        cout << "Enter student number: ";
        cin >> studentNumber;
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter student's grade: ";
        cin >> grade;
        statusDeterminer(grade);
    }
private:
    string statusDeterminer(int grade)
    {
        string status;
        if (75 <= grade)
        {
            status = "Pass";
        }
        else
        {
            status = "Fail";
        }
        cout << "Student status: " << status;
    }
};

int main()
{
    Student studentA;
    studentA.studentAttributes();
    return 0;
}