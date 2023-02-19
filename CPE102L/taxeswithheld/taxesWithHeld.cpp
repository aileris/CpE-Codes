#include <iostream>

using namespace std;


void computePay()
{
    double salary = 1250.00;
    double stateTax;
    int federalTax;
    int intDependents = 2;
    double dependentDeduction;
    double totalWithHolding;
    double takeHomePay;

    stateTax = salary * 0.065;
    federalTax = salary * 0.28;
    dependentDeduction = salary * 0.025 * intDependents;
    totalWithHolding = stateTax + federalTax + dependentDeduction;
    takeHomePay = salary - totalWithHolding;

    cout << "State Tax: $" << stateTax << endl;
    cout << "Federal Tax: $" << federalTax << endl;
    cout << "Dependents: $" << dependentDeduction << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Take-Home Pay: $" << takeHomePay << endl;
    return;
}


int main()
{
    computePay();
    return 0;
}