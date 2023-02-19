#include <iostream>
#include <cmath>

using namespace std;

class Section_401k
{
private:
    double annualSalary;
    double annualSalaryIncrease;
    double annualReturnRate;
    int currentAge;
    int retirementAge;
    double current401kBalance;
    double contribution401k;
    double employerMatch;
    double employerMaxContribution;
    double totalAccountValue;
public:
    void populateAttributes()
    {
        cout << "Enter Annual Salary ($): ";
        cin >> annualSalary;
        cout << "Enter Annual Salary Increase (%): ";
        cin >> annualSalaryIncrease;
        cout << "Enter Annual Rate of Return (%): ";
        cin >> annualReturnRate;
        cout << "Enter Current Age: ";
        cin >> currentAge;
        cout << "Enter Age of Retirement: ";
        cin >> retirementAge;
        cout << "Enter Current 401k Balance ($): ";
        cin >> current401kBalance;
        cout << "Enter Contribution to 401k (%): ";
        cin >> contribution401k;
        cout << "Enter Employer Match (%): ";
        cin >> employerMatch;
        cout << "Enter Employer Max Contribution (%): ";
        cin >> employerMaxContribution;
        percentToDecimal();
    }
private:
    void percentToDecimal()
    {
        annualSalaryIncrease = annualSalaryIncrease / 100;
        annualReturnRate = annualReturnRate / 100;
        contribution401k = contribution401k / 100;
        employerMatch = employerMatch / 100;
        employerMaxContribution = employerMaxContribution / 100;
    }

    void totalAccountValueCalculator()
    {
        double x;
        double y;
        int n;
        double YC;
        double EC;
        double power;
        double first;
        double second;
        double third;
        n = retirementAge - currentAge;
        YC = (annualSalary * contribution401k) / 12;
        EC = YC * employerMatch;
        power = n * 12;
        x = 1 + (annualReturnRate/12);
        y = pow(x, power);
        first = current401kBalance * y;
        second = (YC + EC)*(y-1) / (annualReturnRate / 12);
        third = x;
        totalAccountValue = first + second * third;
    }

public:
    void displayAttributes()
    {
        totalAccountValueCalculator();
        cout << " " << endl;
        cout << "Internal Revenue Code: Section 401(k)" << endl;
        cout << "Annual Salary ($): " << annualSalary << endl;
        cout << "Annual Salary Increase (%): " << annualSalaryIncrease << endl;
        cout << "Annual Rate of Return (%): " << annualReturnRate << endl;
        cout << "Current Age: " << currentAge << endl;
        cout << "Retirement Age: " << retirementAge << endl;
        cout << "Current 401k Balance ($): " << current401kBalance << endl;
        cout << "Contribution to 401k (%): " << contribution401k << endl;
        cout << "Employer Match (%): " << employerMatch << endl;
        cout << "Employer Max Contribution (%): " << employerMaxContribution << endl;
        cout << " " << endl;
        cout << "Your 401(k) Summary" << endl;
        cout << "Annual Salary ($): " << annualSalary << endl;
        cout << "Annual Salary Increase (%): " << annualSalaryIncrease << endl;
        cout << "Annual Rate of Return (%): " << annualReturnRate << endl;
        cout << "Current Age: " << currentAge << endl;
        cout << "Retirement Age: " << retirementAge << endl;
        cout << "Current 401k Balance ($): " << current401kBalance << endl;
        cout << "Contribution to 401k (%): " << contribution401k << endl;
        cout << "Employer Match (%): " << employerMatch << endl;
        cout << "Employer Max Contribution (%): " << employerMaxContribution << endl;
        cout << "Total Account Value at Age " << retirementAge << ": $" << totalAccountValue;
    }
};

int main()
{
    Section_401k calculator401k;
    calculator401k.populateAttributes();
    calculator401k.displayAttributes();
    return 0;
}