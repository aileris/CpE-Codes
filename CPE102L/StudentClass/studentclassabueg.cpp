#include <iostream>

using namespace std;

class Student
{
private:
    string studentName;
    string status;
    int grade;
    int studentNumber;

public:
Student(string name, int sn, int finalGrade)
{
    void setStudentName(string name);
    {
        studentName = name;
    }

    void setStudentNumber(int sn);
    {
        studentNumber = sn;
    }

    void setGrade(int finalGrade);
    {
        grade = finalGrade;
    }
}
private:
    void determineStatus()
    {
        if(grade >= 75)
        {
            status = "Pass";
        }
        else
        {
            status = "Fail";
        }
    }
};

int main()
{
    Student aStudent("John", 6, 86);
    cout << aStudent.studentNumber;

    return 0;
}