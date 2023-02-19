#include <iostream>

using namespace std;

double investmentCalculator(double balance, double rate, double period)
{
    double principalAmount;
    principalAmount = balance + (balance * rate * period);
    return principalAmount;
}

int main()
{
    int initialMoney;
    double interestAmount;
    int numberOfYears;
    
    cout << "Enter principal amount: ";
    cin >> initialMoney;
    cout << "Enter annual interest rate (decimal form): ";
    cin >> interestAmount;
    cout << "Enter the period in years: ";
    cin >> numberOfYears;

    cout << "Total amount accumulated with the inclusion of interest rate: " << investmentCalculator(initialMoney, interestAmount, numberOfYears);
    return 0;
}