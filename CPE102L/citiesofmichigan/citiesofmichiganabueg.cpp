#include <iostream>

using namespace std;

string city_michigan;
const int SIZE = 10;
string CITY[SIZE] = {"Acme", "Albion", "Detroit", "Watervliet", "Coloma", "Saginaw", "Richland", "Glenn", "Midland", "Brooklyn"};
int sub;
string foundIt;
string state;
string MSG_YES = "City is found";
string MSG_NO = "City is not found";
string FINISH = "Quit";

void houseKeeping()
{
    cout << "Enter a city from Michigan or " << FINISH << " to quit (Make sure to capitalize the first letter): ";
    cin >> city_michigan;
    return;
}

void detailLoop()
{
    foundIt = "N";
    sub = 0;
    while(sub < SIZE)
    {
        if(city_michigan == CITY[sub])
        {
            foundIt = "Y";
            state = CITY[sub];
        }
        sub = sub + 1;
    }

    if(foundIt == "Y")
    {
        cout << MSG_YES << endl;
    }
    else
    {
        cout << MSG_NO << endl;
    }

    cout << "Enter a city from Michigan or " << FINISH << " to quit (Make sure to capitalize the first letter): ";
    cin >> city_michigan;
    return;
}

void endOfJob()
{
    cout << "I'm glad I can be of assistance, until next time!";
    return;
}

int main()
{
    houseKeeping();
    while(city_michigan != FINISH)
    {
        detailLoop();
    }
    endOfJob();
    return 0;
}