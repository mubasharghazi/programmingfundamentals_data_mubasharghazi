#include <iostream>
using namespace std;
int main() {
    int number,square;  // Declaration

    cout << "Enter a number: "; // for print on windows
    cin >> number; // To input Number from user 

    // Calculate the square
    square = number * number;

    // Display the result
    cout << "The square of " << number << " is: " << square <<endl;

    return 0;
}

