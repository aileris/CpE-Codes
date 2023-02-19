#include <iostream> // De Guzman, Johann Daniel C.
#include <fstream> //2021104898; CPE103L; A7
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int grades[100];
    int size = 100;
    ifstream inputFile("input.dat");
    
    
    for(int i = 0; i < size; i++) //Assigns the file to an array
    {
        inputFile >> grades[i];
    }
    inputFile.close();
    
    int n = sizeof(grades)/sizeof(grades[0]);
    cout << "Value" << "  " << "Occurrence" << endl;
    int j = 0;
    int l = 100;
    
    while(j != 100)
    {
        for(int k=0; k < 100; k++)
        {
            if(1 <= count(grades, grades+n, l))
            {
                k = k + count(grades, grades+n, l) - 1;
                if(l == grades[k])
                {
                    cout << grades[k] << '\t' << count(grades, grades+n, l) << endl;
                }
            }
        }
        l--;
        j++;
    }
    return 0;
}
