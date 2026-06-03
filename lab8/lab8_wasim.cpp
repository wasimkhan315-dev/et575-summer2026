#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (1.8 * celsius) + 32;
}

int main()
{
    int choice;
    double temperature;
    double result;

    // Display menu
    cout << "Choose conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Fahrenheit to Kelvin" << endl;

    cout << "\nEnter choice: ";
    cin >> choice;

    cout << fixed << setprecision(1);

    // Process user's choice
    if (choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        result = celsiusToFahrenheit(temperature);

        cout << temperature << "°C is "
             << result << "°F" << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;

        result = (5.0 / 9.0) * (temperature - 32);

        cout << temperature << "°F is "
             << result << "°C" << endl;
    }
    else if (choice == 3)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        result = temperature + 273.15;

        cout << temperature << "°C is "
             << result << " K" << endl;
    }
    else if (choice == 4)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;

        result = (temperature - 32) * (5.0 / 9.0) + 273.15;

        cout << temperature << "°F is "
             << result << " K" << endl;
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

/*
1. Does the AI code use C++ concepts you're unfamiliar with? The ai used functions nd arithmetic operators and im ot familiar with them.


2. Are there any issues or improvements you noticed? Explain.
One improvement was using loops several times so you dont have to restart the program.


3. What methods did you use to test if the AI code was working as it should? Explain. 
I tested using temperatures and converting them like 20 celsius to 68 fahrenheight.
*/
