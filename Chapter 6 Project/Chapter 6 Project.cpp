#include <iostream>
#include <iomanip>

using namespace std;

double getCelsius(double fahrenheit);

const int fMin = 0;
const int fMax = 20;

// Handles the outputting of the table
int main()
{
    cout << "Fahrenheit to Celsius Table" << endl;
    cout << setw(8) << "Fahrenheit" << setw(8) << "Celsius" << endl;

    for (double i = fMin; i <= fMax; i++) {
        cout << fixed << setprecision(1);
        cout << right << setw(8) << i << setw(8) << getCelsius(i) << endl;
    }

    return 0;
}

// Converts the fahrenheir value to celsius using the formula
double getCelsius(double fahrenheit) {
    double celsius = (5/9)(fahrenheit-32);

    return celsius;
}