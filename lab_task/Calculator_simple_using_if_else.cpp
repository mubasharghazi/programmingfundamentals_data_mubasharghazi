// PROGRAM 	for Simple Calculation
#include <iostream>
using namespace std;

int main() {
    char op;
	cout << "Simple Calculator" << endl;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;
	double num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    

    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    } else {
        cout << "Error: Invalid operation" << endl;
    }

    return 0;
}

