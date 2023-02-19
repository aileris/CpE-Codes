#include <iostream>

using namespace std;

const int size = 10;
string michiganCities[size] = {"Acme", "Albion", "Detroit", "Watervliet", "Coloma", "Saginaw", "Richland", "Glenn", "Midland", "Brooklyn"};
string city;
string foundCity = "N";
int sub = 0;

void houseKeeping()
{
    cout << "Enter city in the State of Michigan: ";
    cin >> city;
    return;
}
void detailLoop()
{
    if (city  == michiganCities[sub])
    {
        foundCity = "Y";
    }
        sub = sub + 1;
    return;
}
void endOfJob()
{
    if(foundCity == "Y")
    {
        cout << "The city is found.";
    }
    else
    {
        cout << "The city is not found.";
    }
    return;
}
int main()
{
    houseKeeping();
    while (sub < size)
    {
        detailLoop();
    }
    endOfJob();
    return 0;
}