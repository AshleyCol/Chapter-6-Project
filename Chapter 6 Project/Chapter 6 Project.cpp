#include <iostream>
#include <iomanip>

using namespace std;

double getCelsius(double fahrenheit);

const double fMin = 0;
const double fMax = 20;

// Handles the outputting of the table
int main()
{
    cout << "Fahrenheit to Celsius Table" << endl;
    cout << setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;

    for (double i = fMin; i <= fMax; i++) {
        cout << fixed << setprecision(1);
        cout << right << setw(12) << i << setw(12) << getCelsius(i) << endl;
    }

    return 0;
}

// Converts the fahrenheir value to celsius using the formula
double getCelsius(double fahrenheit) {

    double celsius = (5.0/9.0) * (fahrenheit-32);

    return celsius;
}