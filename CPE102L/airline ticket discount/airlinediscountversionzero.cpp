#include <iostream>

using namespace std;

string name;
int age;

void housekeeping()
{
    cout << "Enter passenger name: ";
    cin >> name;

    cout << "Enter passenger age: ";
    cin >> age;
    return;
}

void detailLoop()
{
    if(age <= 6 || 65 <= age)
    {
        cout << "The passenger, " << name << ", qualify for a 25% discount." << endl;
    }
    else
    {
        cout << "The passenger, " << name << ", does not qualify for a 25% discount." << endl;
    }
    return;
}

void endOfJob()
{
    cout << "Passenger qualifications complete.";
    return;
}

int main()
{
    housekeeping();
    detailLoop();
    endOfJob();
    return 0;
}