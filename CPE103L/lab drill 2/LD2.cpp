#include <iostream>// De Guzman, Johann Daniel C.
// 2021104898 ; CPE103L/A7

using namespace std;

int main()
{
    string gender;
    string name;
    int money;
    cout << "What is your name? ";
    cin >> name;
    while(gender != "Male" && gender != "Female")
    {
        cout << "Hello, " << name << ". What is your gender? (Male/Female): ";
        cin >> gender;
        if(gender == "Male")
        {
            cout << "Your chosen character is male." << endl;
        }
        else if (gender == "Female")
        {
            cout << "Your chosen character is female." << endl;
        }
        else
        {
            cout << "You entered an invalid gender." << endl;
        }
    }
    
    cout << endl << "Welcome to the weapons shop, " << name << "." << endl;
    cout << "       Available Weapons   " << endl;
    cout << "Bow and arrow     450 units" << endl;
    cout << "Shield            380 units" << endl;
    cout << "Spear             400 units" << endl;
    cout << "Sword             500 units" << endl;

    while(money < 380 || 1000 <= money)
    {
        cout << endl << "How much money do you have?: ";
        cin >> money;
        switch(money)
        {
            case 380 ... 399:
                cout << "I suggest buying a shield!";
                break;
            case 400 ... 449:
                cout << "I suggest buying a shield or spear!";
                break;
            case 450 ... 499:
                cout << "I suggest buying a shield or spear or bow and arrow!";
                break;
            case 500 ... 1000:
                cout << "I suggest buying a shield or spear or bow and arrow or sword!";
                break;
            default:
                cout << "Your money is not within the range. Please try again." << endl;
                break;
        }
    }
    return 0;
}