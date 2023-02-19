#include <iostream> // De Guzman, Johann Daniel C.
#include <iomanip> // 2021104898; CPE103L / A7

using namespace std;

int main()
{
    double temperatureCelsius;
    double temperatureFahrenheit;
    double celsiusToFahrenheit;
    double fahrenheitToCelsius;

    cout << "Enter temperature in Celsius: ";
    cin >> temperatureCelsius;
    celsiusToFahrenheit = (temperatureCelsius * 9.0/5.0) + 32;
    cout << "Celsius to Fahrenheit: " << fixed << setprecision(3) << celsiusToFahrenheit << endl;

    cout << endl << "Enter temperature in Fahrenheit: ";
    cin >> temperatureFahrenheit;
    fahrenheitToCelsius = 5.0/9.0 * (temperatureFahrenheit - 32);
    cout << "Fahrenheit to Celsius: " << fixed << setprecision(3) << fahrenheitToCelsius;
    return 0;
}