#include <iostream>
using namespace std;

// Function declarations
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);
float celsiusToKelvin(float c);
float kelvinToCelsius(float k);

int main()
{
    int choice;
    float temp;

    do
    {
        cout << "\n===== Temperature Converter =====\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                cout << "Fahrenheit = "
                     << celsiusToFahrenheit(temp) << " F\n";
                break;

            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temp;
                cout << "Celsius = "
                     << fahrenheitToCelsius(temp) << " C\n";
                break;

            case 3:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                cout << "Kelvin = "
                     << celsiusToKelvin(temp) << " K\n";
                break;

            case 4:
                cout << "Enter temperature in Kelvin: ";
                cin >> temp;
                cout << "Celsius = "
                     << kelvinToCelsius(temp) << " C\n";
                break;

            case 5:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}

// Function Definitions

float celsiusToFahrenheit(float c)
{
    return (c * 9/5) + 32;
}

float fahrenheitToCelsius(float f)
{
    return (f - 32) * 5/9;
}

float celsiusToKelvin(float c)
{
    return c + 273.15;
}

float kelvinToCelsius(float k)
{
    return k - 273.15;
}