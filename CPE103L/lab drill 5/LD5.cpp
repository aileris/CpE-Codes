#include <iostream> // De Guzman, Johann Daniel C.
#include <cmath> // 2021104898; CPE103L / A7
#include <iomanip>

using namespace std;

double calculateMean(double x1, double x2, double x3, double x4, double x5)
{
    double x;
    x = (x1 + x2 + x3 + x4 + x5)/5.0;
    cout << "Mean: " << fixed << setprecision(2) << x << endl;
    return x;
}

double calculateStandardDeviation(double x1, double x2, double x3, double x4, double x5, double x)
{
    double s;
    s = sqrt((pow((x1-x),2) + pow((x2-x),2) + pow((x3-x),2) + pow((x4-x),2) + pow((x5-x),2))/5.0);
    cout << "Standard Deviation: " << fixed << setprecision(2) << s;
    return s;
}

int main()
{
    double n1, n2, n3, n4, n5;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter third number: ";
    cin >> n3;
    cout << "Enter fourth number: ";
    cin >> n4;
    cout << "Enter fifth number: ";
    cin >> n5;

    double x = calculateMean(n1, n2, n3, n4, n5);
    calculateStandardDeviation(n1, n2, n3, n4, n5, x);

    return 0;
}