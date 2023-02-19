#include <iostream>

using namespace std;

int firstTerm = 0;
int secondTerm = 1;
int thirdTerm;
int fibonacciLimit = 15;
int fibonacciStart = 2;

void houseKeeping()
{
    cout << firstTerm << ", " << secondTerm << ", ";
    return;
}

void detailLoop()
{
    thirdTerm = firstTerm + secondTerm;
    cout << thirdTerm << ", ";
    firstTerm = secondTerm;
    secondTerm = thirdTerm;
    fibonacciStart = fibonacciStart + 1;
    return;
}

void endOfJob()
{
    cout << endl << "Fibonacci Sequence Complete.";
    return;
}

int main()
{
    houseKeeping();
    while(fibonacciStart < fibonacciLimit)
    {
        detailLoop();
    }
    endOfJob();
    return 0;
}