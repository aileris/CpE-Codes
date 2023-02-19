#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int User_Number;
    int residue;
    int Digit_Raised;
    int sum = 0;
    int Original_Number;
    int Degree_Test;
    int count = 0;

    cout << "The following program is an Armstrong Number Validator." << endl;
    cout << "Enter any number: ";
    cin >> User_Number;
    Original_Number = User_Number;
    Degree_Test = User_Number;

    while(Degree_Test != 0)
    {
        Degree_Test = Degree_Test / 10;
        count = count + 1;
    }
    Degree_Test = User_Number;

    while(User_Number != 0)
    {
        residue = User_Number % 10;
        Digit_Raised = round(pow(residue, count));
        sum = sum + Digit_Raised;
        User_Number = User_Number / 10;
    }

    if(sum == Original_Number)
    {
        cout << Original_Number << " is an Armstrong Number";
    }
    else
    {
        cout << Original_Number << " is not an Armstrong Number";
    }
    return 0;
}