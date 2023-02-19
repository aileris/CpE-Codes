#include <iostream> // De Guzman, Johann Daniel C.
// 2021104898; CPE103L/A7

using namespace std;

int main()
{
    // First Part
    for(int a = 1; a <= 5; a++)
    {
        for(int b = 1; b <= a; b++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int c = 1; c <= 5; c++)
    {
        for(int d = 5; d >= c; d--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // Second Part
    int firstTerm = 1;
    while(firstTerm < 40)
    {
        cout << firstTerm << " ";
        firstTerm = firstTerm + 2;
    }
    cout << endl;
    
    //Third Part (cannot do with just the use of do while and with iostream.)
    cout << endl;
    int number = 5;
    int divisor = 2;
    bool prime = true;
    cout << 2 << " " << 3 << " ";
    do
    {
        while(prime = true)
        {
            if(number%divisor == 0)
            {
                prime = false;
                break;
            }
            else
            {
                cout << number << " ";
                break;
            }
            divisor++;
        }
        divisor = 2;
        number++;
    } while (number < 40);

    return 0;
}