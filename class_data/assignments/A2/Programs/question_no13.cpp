#include <iostream>

using namespace std;

int main() {
    int number;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Validate if the input is non-negative
    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1; // Exit with an error code
    }

    // Calculate the sum of digits
    int sum = 0;

    while (number > 0 || sum > 9) {
        if (number == 0) {
            number = sum;
            sum = 0;
        }

        sum += number % 10;
        number /= 10;
    }

    // Output the result
    cout << "Sum of digits until it becomes a single-digit number: " << sum << endl;

    return 0;
}
