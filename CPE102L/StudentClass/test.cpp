#include <iostream>

using namespace std;

int main()
{
    int grade = 65;
    string status;

    if (grade >= 75)
    {
        cout << "Passed";
        cin >> status;
    }
    else
        cout << "Failed";
        status = "Failed";
    }

    return 0;
}