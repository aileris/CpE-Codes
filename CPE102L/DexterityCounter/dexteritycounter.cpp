#include <iostream>

using namespace std;

string QUIT = "X";
int leftHandCounter;
int rightHandCounter;
string dexterity;

void houseKeeping()
{
    cout << "Enter dexterity (L or R): ";
    cin >> dexterity;
    return;
}

void detailLoop()
{
    if(dexterity == "L")
    {
        leftHandCounter = leftHandCounter + 1;
    }
    else
    {
        rightHandCounter = rightHandCounter + 1;
    }
    cout << "Enter dexterity or " << QUIT << " to quit: ";
    cin >> dexterity;
    return;
}

void endOfJob()
{
    cout << "The total amount of left handed people are: " << leftHandCounter << endl;
    cout << "The total amount of right handed people are: " << rightHandCounter << endl;
    cout << "Dexterity counter complete.";
    return;
}

int main()
{
    houseKeeping();
    while(dexterity != QUIT)
    {
        detailLoop();
    }
    endOfJob();
    return 0;
}