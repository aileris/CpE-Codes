#include <iostream>

using namespace std;

string name;
int age;
string QUIT = "ZZZ";

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
    cout << "Enter passenger name or " << QUIT << " to quit: ";
    cin >> name;
    cout << "Enter passenger age: ";
    cin >> age;
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
    while(name != QUIT)
    {
        detailLoop();
    }
    endOfJob();
    return 0;
}

/* Pseudocode
START
    Declarations
        string name
        num age
    housekeeping()
    detailLoop()
    endOfJob()
STOP

housekeeping()
    output "Enter passenger name: "
    input name
    output "Enter passenger age: "
    input age
return

detailLoop()
    if age <= 6 OR 65 <= age then
        output "The passenger, " name ", qualify for a 25% discount."
    else
        output "The passenger, " name ", does not qualify for a 25% discount."
    endif
return

endOfJob()
    output "Passenger qualifications complete."
return
*/