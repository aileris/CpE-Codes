#include <iostream>

using namespace std;

    string name;
    int hours;
    double RATE = 15.00;
    int WORK_WEEK = 40;
    double OVERTIME = 1.5;
    double pay;
    string QUIT = "ZZZ";

void housekeeping()
{
    cout << "This program computes payroll based on" << endl;
    cout << "overtime rate of " << OVERTIME << " after " << WORK_WEEK << " hours." << endl;
    return;
}

void detailLoop()
{
    cout << "Enter hours worked >> ";
    cin >> hours;
    if (hours > WORK_WEEK)
    {
        pay = (WORK_WEEK * RATE) + (hours - WORK_WEEK) * RATE * OVERTIME;
    }
    else
    {
        pay = hours * RATE;
    }
    cout << "Pay for " << name << "is $" << pay << endl;
    cout << "Enter employee name or " << QUIT << " to quit >> ";
    cin >> name;
    return;
}

void finish()
{
    cout << "Overtime pay calculations complete.";
    return;
}

int main()
{
    housekeeping();
    while (name != QUIT)
    {
        detailLoop();
    }
    finish();
    return 0;
}
