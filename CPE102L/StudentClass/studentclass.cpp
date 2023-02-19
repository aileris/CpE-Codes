#include <iostream>

using namespace std;

class Student
{
public:
    int studentNumber;
    string studentName;
    int grade;
    string status;

    Student(int aStudentNumber, string aStudentName, int aGrade, string aStatus)
    {
        studentNumber = aStudentNumber;
        studentName = aStudentName;
        grade = aGrade;
        status = aStatus;
        return;
    }
};

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
    return status;
}

int main()
{
    Student aStudent(25, "Joel Santos", 65, "Pass");
    cout << "Student number: " << aStudent.studentNumber << endl;
    cout << "Student name: " << aStudent.studentName << endl;
    cout << "Grade: " << aStudent.grade << endl;
    cout << "Status: " << statusDeterminer(aStudent.grade) << endl;
    return 0;
}