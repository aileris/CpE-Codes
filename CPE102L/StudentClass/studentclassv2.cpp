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
    int setStudentNumber();
    {
        studentNumber = aStudentNumber;
    }

    string setStudentName();
    {
        studentName = aStudentName;
    }

    int setStudentGrade();
    {
        grade = aGrade;
    }

    string setStudentStatus();
    {
        status = aStatus;
    }
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
    Student aStudent(10, "Joel Santos", 70, "Pass");
    cout << "Student number: " << aStudent.studentNumber << endl;
    cout << "Student name: " << aStudent.studentName << endl;
    cout << "Grade: " << aStudent.grade << endl;
    cout << "Status: " << statusDeterminer(aStudent.grade) << endl;
    return 0;
}