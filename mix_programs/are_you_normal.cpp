//  Write a program that takes the temperature of a 
// patient in Fahrenheit as input and prints “Normal” if 
// the temperature is equal to 98.6

#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the temperature
    double temperature;

    // Prompt the user to enter the temperature
    cout << "Enter the patient's temperature in Fahrenheit: ";
    cin >> temperature;

    // Check if the temperature is equal to 98.6
    if (temperature == 98.6) {
        cout << "Normal" << endl;
    } else {
        cout << "Not Normal" << endl;
    }

    return 0;
}
