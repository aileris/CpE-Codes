#include <iostream>

using namespace std;


double computeTotal(double Balance, double Rate, double Period)
{
    double interest;
    double principal_Amount;

    interest = Balance * Rate * Period;
    principal_Amount = Balance + interest;
    return principal_Amount;
}

int main()
{
    int money;
    double percent;
    int years;
    int accumulated;
    cout << "Enter principal amount: ";
    cin >> money;
    cout << "Enter the Annual Interest Rate (In decimal Form): ";
    cin >> percent;
    cout << "Enter the period in years (Number form and don't include the unit): ";
    cin >> years;

    cout << "Total Amount Accumulated with Interest included: " << computeTotal(money, percent, years);
    return 0;
}